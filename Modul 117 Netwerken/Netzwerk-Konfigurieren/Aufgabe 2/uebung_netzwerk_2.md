# Aufgabe 2 – Gerber GmbH (Übung Netzwerk C)

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Netzwerk

4 PCs, ein Router und ein Netzwerkdrucker hängen an einem Switch.

| Gerät | IP-Adresse | Hinweis |
|---|---|---|
| Router | 192.168.103.1 | Standardgateway |
| PC1 | 192.168.103.51/24 |  |
| PC2 | 192.168.103.52/24 |  |
| PC3 | 192.168.103.53/24 |  |
| PC4 | 192.168.103.54/24 |  |
| OKI432_SW_Z102 (Drucker) | 192.168.103.244 | Treiber OKI B432 (PCL6) aus der Datei OKW3X055107_90385.exe |

Subnetzmaske /24 = 255.255.255.0, Standardgateway 192.168.103.1.

## Arbeitsgruppe und Benutzer

Arbeitsgruppe: **GERBERGMBH**

| Benutzer | Kontotyp | Passwort |
|---|---|---|
| Assistent | Standardbenutzer | laut Aufgabenblatt |
| Gruppenleiter | Administrator | laut Aufgabenblatt |
| Sekretärin | Standardbenutzer | laut Aufgabenblatt |
| Händler | Standardbenutzer | laut Aufgabenblatt |

Alle vier Benutzer werden auf jedem PC angelegt. Die Passwörter stehen absichtlich nicht in dieser Datei.

## Freigegebene Ordner

| PC | Ordner | Zugriffsrechte |
|---|---|---|
| PC1 | Termine | alle: Vollzugriff |
| PC2 | Projekte | Gruppenleiter: Vollzugriff, alle anderen: nur lesen |
| PC3 | Briefvorlagen | Sekretärin: Vollzugriff, alle anderen: nur lesen |
| PC4 | Preislisten | Händler: Vollzugriff, alle anderen: nur lesen |

## Netzlaufwerke

Die freigegebenen Ordner werden auf den anderen PCs als Netzlaufwerk verbunden:

| PC | verbindet als Netzlaufwerk |
|---|---|
| PC1 | `\\192.168.103.52\Projekte`, `\\192.168.103.53\Briefvorlagen`, `\\192.168.103.54\Preislisten` |
| PC2 | `\\192.168.103.51\Termine`, `\\192.168.103.53\Briefvorlagen`, `\\192.168.103.54\Preislisten` |
| PC3 | `\\192.168.103.51\Termine`, `\\192.168.103.52\Projekte`, `\\192.168.103.54\Preislisten` |
| PC4 | `\\192.168.103.51\Termine`, `\\192.168.103.52\Projekte`, `\\192.168.103.53\Briefvorlagen` |

## Drucker

Jeder PC richtet den Drucker als **lokalen Drucker** über einen neuen Standard-TCP/IP-Port mit der Adresse 192.168.103.244 ein. Treiber: OKI B432 (PCL6), installiert aus `OKW3X055107_90385.exe`. Druckername: OKI432_SW_Z102.
