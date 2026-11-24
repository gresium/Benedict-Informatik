# ***************************************************************
# Projekt:      Uebung Netzwerk E - Einrichtung eines PCs
# Author:       Gresa Hisa
# Datum:        25.11.2026
# ***************************************************************
# Verwendung (PowerShell):
#   Teil 1, als Administrator, auf jedem PC (Nr = 1 bis 4):
#       .\netzwerk_e_einrichten.ps1 -Nr 1 -Teil Einrichten
#   Neu starten. Dann als alkup und danach als makel angemeldet:
#       .\netzwerk_e_einrichten.ps1 -Nr 1 -Teil Verbinden
# ***************************************************************
param(
    [Parameter(Mandatory)][ValidateRange(1,4)][int]$Nr,
    [Parameter(Mandatory)][ValidateSet('Einrichten','Verbinden')][string]$Teil,
    [string]$Adapter = 'Ethernet'
)

$pc      = "z131_pc$Nr"
$ip      = "168.34.10.5$Nr"
$drucker = "z131_OKI_Laser$Nr"
$druckIp = "168.34.10.10$Nr"
$ordner  = "C:\${pc}_Daten"
$buchst  = @{ 1 = 'K'; 2 = 'L'; 3 = 'M'; 4 = 'N' }

if ($Teil -eq 'Einrichten') {
    $admin = ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole('Administrators')
    if (-not $admin) { Write-Host 'Bitte PowerShell als Administrator starten.' -ForegroundColor Red; return }

    # 1) IP-Adresse
    Get-NetIPAddress -InterfaceAlias $Adapter -AddressFamily IPv4 -ErrorAction SilentlyContinue | Remove-NetIPAddress -Confirm:$false
    Remove-NetRoute -InterfaceAlias $Adapter -DestinationPrefix '0.0.0.0/0' -Confirm:$false -ErrorAction SilentlyContinue
    New-NetIPAddress -InterfaceAlias $Adapter -IPAddress $ip -PrefixLength 16 -DefaultGateway '168.34.0.1' | Out-Null
    Write-Host "IP gesetzt: $ip / 255.255.0.0, Gateway 168.34.0.1"

    # 2) Netzwerkprofil Privat und Freigabe
    Set-NetConnectionProfile -InterfaceAlias $Adapter -NetworkCategory Private
    Get-NetFirewallRule -DisplayGroup 'Datei- und Druckerfreigabe','File and Printer Sharing' -ErrorAction SilentlyContinue |
        Enable-NetFirewallRule
    Get-NetFirewallRule -DisplayGroup 'Netzwerkerkennung','Network Discovery' -ErrorAction SilentlyContinue |
        Enable-NetFirewallRule

    # 3) Benutzer
    $konten = @(
        @{ Name = 'alkup'; Voll = 'Alex Kuprecht'; Pw = 'Yxcv4567'; Admin = $true  },
        @{ Name = 'makel'; Voll = 'Maja Keller';   Pw = 'Ghjk2345'; Admin = $false }
    )
    foreach ($k in $konten) {
        if (-not (Get-LocalUser -Name $k.Name -ErrorAction SilentlyContinue)) {
            New-LocalUser -Name $k.Name -FullName $k.Voll -PasswordNeverExpires `
                -Password (ConvertTo-SecureString $k.Pw -AsPlainText -Force) | Out-Null
        }
        if ($k.Admin) { Add-LocalGroupMember -SID 'S-1-5-32-544' -Member $k.Name -ErrorAction SilentlyContinue }
        else          { Add-LocalGroupMember -SID 'S-1-5-32-545' -Member $k.Name -ErrorAction SilentlyContinue }
    }
    Write-Host 'Benutzer alkup und makel angelegt.'

    # 4) Ordner, NTFS-Rechte, Freigabe
    New-Item -ItemType Directory -Force $ordner | Out-Null
    icacls $ordner /inheritance:r /grant '*S-1-5-32-544:(OI)(CI)F' '*S-1-5-18:(OI)(CI)F' `
        'alkup:(OI)(CI)F' 'makel:(OI)(CI)RX' | Out-Null
    if (Get-SmbShare -Name "${pc}_Daten" -ErrorAction SilentlyContinue) { Remove-SmbShare -Name "${pc}_Daten" -Force }
    New-SmbShare -Name "${pc}_Daten" -Path $ordner -FullAccess 'alkup' -ReadAccess 'makel' | Out-Null
    Write-Host "Ordner freigegeben: \\$pc\${pc}_Daten"

    # 5) Drucker
    if (-not (Get-PrinterDriver -Name 'OKI B430*' -ErrorAction SilentlyContinue)) {
        Write-Host 'Treiber OKI B430 fehlt: zuerst installieren, dann Teil Einrichten wiederholen.' -ForegroundColor Yellow
    } else {
        $treiber = (Get-PrinterDriver -Name 'OKI B430*' | Select-Object -First 1).Name
        if (-not (Get-PrinterPort -Name "IP_$druckIp" -ErrorAction SilentlyContinue)) {
            Add-PrinterPort -Name "IP_$druckIp" -PrinterHostAddress $druckIp
        }
        Add-Printer -Name $drucker -DriverName $treiber -PortName "IP_$druckIp" -Shared -ShareName $drucker
        Write-Host "Drucker installiert und freigegeben: $drucker"
        Write-Host 'Druckerrechte von Hand setzen: Eigenschaften > Sicherheit, Jeder entfernen, alkup verwalten, makel drucken.' -ForegroundColor Yellow
    }

    # 6) Name und Arbeitsgruppe zuletzt (Neustart noetig)
    Add-Computer -WorkgroupName 'GERBER' -ErrorAction SilentlyContinue
    Rename-Computer -NewName $pc -Force
    Write-Host "Fertig. Jetzt neu starten: Restart-Computer" -ForegroundColor Green
}
else {
    # Netzlaufwerke und Netzwerkdrucker fuer den angemeldeten Benutzer
    foreach ($i in 1..4) {
        if ($i -eq $Nr) { continue }
        net use "$($buchst[$i]):" "\\z131_pc$i\z131_pc${i}_Daten" /persistent:yes | Out-Null
        Write-Host "Netzlaufwerk $($buchst[$i]): -> \\z131_pc$i\z131_pc${i}_Daten"
    }
    foreach ($i in 1..4) {
        if ($i -eq $Nr) { continue }
        rundll32 printui.dll,PrintUIEntry /in /n "\\z131_pc$i\z131_OKI_Laser$i"
        Write-Host "Drucker verbunden: \\z131_pc$i\z131_OKI_Laser$i"
    }
    Write-Host 'Als alkup zuerst ausfuehren (Treiberinstallation), danach als makel.' -ForegroundColor Green
}
