# Lokale Drucker installieren und freigeben

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

Anleitung und Testplan für Drucker unter Windows 10: lokal installieren, im Netz freigeben, Rechte setzen und auf anderen PCs verbinden. Die Beispiele stammen aus den Übungen Netzwerk E (OKI B430) und Windows 10 Teil 2 (Lexmark).

## Begriffe

| Begriff | Bedeutung |
|---|---|
| Lokaler Drucker | Drucker, der auf diesem PC installiert ist (USB oder Netzwerkdrucker mit eigenem TCP/IP-Port) |
| Freigabe | Der PC gibt den Drucker im Netz frei, andere PCs verbinden sich über `\\pcname\druckername` |
| TCP/IP-Port | Der Drucker hat eine eigene feste IP-Adresse, Windows spricht ihn direkt darüber an |
| Druckserver | Der PC, auf dem der freigegebene Drucker installiert ist |

## 1. Drucker mit eigener IP lokal installieren

Beispiel: OKI B430 mit der IP 168.34.10.101

1. `Win + R` → `ms-settings:printers` → «Drucker oder Scanner hinzufügen».
2. «Der gewünschte Drucker ist nicht aufgeführt» → «Drucker unter Verwendung einer TCP/IP-Adresse oder eines Hostnamens hinzufügen».
3. Gerätetyp «TCP/IP-Gerät», Hostname oder IP-Adresse `168.34.10.101`. «Den Drucker abfragen und den zu verwendenden Treiber automatisch auswählen» abwählen, falls der Drucker nicht antwortet.
4. Treiber wählen: Hersteller **OKI**, Modell **B430**. Fehlt er: «Windows Update» klicken oder den Treiber von der Herstellerseite installieren.
5. Druckernamen eintragen, z. B. `z131_OKI_Laser1`.
6. «Diesen Drucker freigeben», Freigabename gleich wie der Druckername → Fertig stellen.
7. Testseite drucken.

## 2. Freigabe und Rechte

1. Drucker anklicken → «Verwalten» → «Druckereigenschaften» (alte Ansicht: `control printers`).
2. Register **Freigabe**: Haken bei «Drucker freigeben», Freigabename prüfen.
3. Register **Sicherheit**: «Jeder» entfernen, dann Benutzer hinzufügen.

| Benutzer | Drucken | Drucker verwalten | Dokumente verwalten |
|---|---|---|---|
| alkup (Administrator) | zulassen | zulassen | zulassen |
| makel (Standardbenutzer) | zulassen | – | – |

Der Ersteller eines Auftrags kann seinen eigenen Auftrag immer abbrechen (Ersteller-Besitzer). Fremde Aufträge verwalten kann nur, wer «Dokumente verwalten» hat.

## 3. Freigegebenen Drucker auf einem anderen PC verbinden

1. `Win + R` → `\\z131_pc1` → Enter.
2. Doppelklick auf `z131_OKI_Laser1`. Windows installiert den Treiber automatisch.
3. Zuerst als Administrator (alkup), denn nur mit Adminrechten wird der Treiber installiert. Danach klappt es auch für Standardbenutzer.
4. Kontrolle: `ms-settings:printers` zeigt den Drucker.

## 4. Per Kommandozeile

PowerShell als Administrator, auf dem Druckserver:

```powershell
Add-PrinterPort -Name "IP_168.34.10.101" -PrinterHostAddress "168.34.10.101"
Add-Printer -Name "z131_OKI_Laser1" -DriverName "OKI B430" -PortName "IP_168.34.10.101" -Shared -ShareName "z131_OKI_Laser1"
Get-Printer | Format-Table Name, PortName, Shared, ShareName
```

Auf einem anderen PC verbinden:

```powershell
Add-Printer -ConnectionName "\\z131_pc1\z131_OKI_Laser1"
```

## 5. Häufige Fehler

| Problem | Ursache | Lösung |
|---|---|---|
| Drucker offline | falsche IP oder Drucker aus | `ping` auf die Drucker-IP, Port in den Druckereigenschaften prüfen |
| Treiber fehlt | Modell nicht in der Liste | Windows Update oder Herstellertreiber |
| `\\pcname` nicht erreichbar | Freigabe oder Netzwerkerkennung aus | Datei- und Druckerfreigabe im Profil «Privat» einschalten |
| «Zugriff verweigert» beim Verbinden | Benutzer ohne Recht «Drucken» | Register «Sicherheit» prüfen |
| Treiberinstallation scheitert | Standardbenutzer | zuerst als Administrator verbinden |

## 6. Testplan

| Nr | Was? | Wo? | Wie? | Resultat (erwartet) | Status |
|---|---|---|---|---|---|
| 1 | Drucker erreichbar | Druckserver, CMD | `ping 168.34.10.101` | Antwort, 0 % Verlust | [ ] |
| 2 | Lokale Testseite | Druckserver | Druckereigenschaften → Testseite | Seite wird gedruckt | [ ] |
| 3 | Freigabe sichtbar | anderer PC, Explorer | `\\z131_pc1` | Drucker `z131_OKI_Laser1` sichtbar | [ ] |
| 4 | Verbinden als alkup | anderer PC | Doppelklick auf den Drucker | Treiber wird installiert, Drucker erscheint | [ ] |
| 5 | alkup druckt | anderer PC | Dokument drucken | Seite wird gedruckt | [ ] |
| 6 | makel druckt | anderer PC | Dokument drucken | Seite wird gedruckt | [ ] |
| 7 | alkup verwaltet | Warteschlange | Auftrag von makel abbrechen | erfolgreich | [ ] |
| 8 | makel verwaltet nicht | Warteschlange | Auftrag von alkup abbrechen | «Zugriff verweigert» | [ ] |
