# Aufgabe 3 – Gruppe 4 (Übung Netzwerk D)

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Netzwerkeinstellungen

Arbeitsgruppe: **GRUPPE4**, Subnetzmaske: 255.255.255.0

| Computername | IP-Adresse | Subnetzmaske |
|---|---|---|
| CL1 | 213.54.10.81 | 255.255.255.0 |
| CL2 | 213.54.10.82 | 255.255.255.0 |
| CL3 | 213.54.10.83 | 255.255.255.0 |
| CL4 | 213.54.10.84 | 255.255.255.0 |

## Benutzerkonten (auf jedem PC)

| Benutzername | Kontotyp | Passwort |
|---|---|---|
| anwalt | Administrator | laut Aufgabenblatt |
| praktikant | Standardbenutzer | laut Aufgabenblatt |

Die Passwörter stehen absichtlich nicht in dieser Datei.

## Freigegebene Ordner

| PC | Ordner | Zugriffsrechte |
|---|---|---|
| CL1 | Fälle | anwalt: Vollzugriff, Jeder: Vollzugriff |
| CL2 | Termine | anwalt: Vollzugriff, Jeder: nur lesen |
| CL3 | Praktikant | anwalt: kein Zugriff, praktikant: Vollzugriff |
| CL4 | Vorlagen | anwalt: Vollzugriff, praktikant: nur lesen |

## Netzlaufwerke

Jeder PC verbindet die 3 Freigaben der anderen PCs als Netzlaufwerk:

| PC | Netzlaufwerke |
|---|---|
| CL1 | `\\213.54.10.82\Termine`, `\\213.54.10.83\Praktikant`, `\\213.54.10.84\Vorlagen` |
| CL2 | `\\213.54.10.81\Fälle`, `\\213.54.10.83\Praktikant`, `\\213.54.10.84\Vorlagen` |
| CL3 | `\\213.54.10.81\Fälle`, `\\213.54.10.82\Termine`, `\\213.54.10.84\Vorlagen` |
| CL4 | `\\213.54.10.81\Fälle`, `\\213.54.10.82\Termine`, `\\213.54.10.83\Praktikant` |

## Drucker

| Einstellung | Wert |
|---|---|
| Modell | OKI B412 (PCL6) |
| IP-Adresse | 213.54.10.101 |
| Anschluss | Standard-TCP/IP-Port |
| anwalt | drucken und Drucker verwalten |
| praktikant | drucken |

## Dokumentation pro Computer

### CL1

- Computername: CL1, Arbeitsgruppe: GRUPPE4
- IP-Adresse: 213.54.10.81, Subnetzmaske: 255.255.255.0
- Benutzer: anwalt (Administrator), praktikant (Standard)
- Freigabe: Fälle (anwalt: Vollzugriff, Jeder: Vollzugriff)
- Netzlaufwerke: Freigaben der anderen drei PCs
- Drucker: OKI B412 (PCL6) auf 213.54.10.101

### CL2

- Computername: CL2, Arbeitsgruppe: GRUPPE4
- IP-Adresse: 213.54.10.82, Subnetzmaske: 255.255.255.0
- Benutzer: anwalt (Administrator), praktikant (Standard)
- Freigabe: Termine (anwalt: Vollzugriff, Jeder: nur lesen)
- Netzlaufwerke: Freigaben der anderen drei PCs
- Drucker: OKI B412 (PCL6) auf 213.54.10.101

### CL3

- Computername: CL3, Arbeitsgruppe: GRUPPE4
- IP-Adresse: 213.54.10.83, Subnetzmaske: 255.255.255.0
- Benutzer: anwalt (Administrator), praktikant (Standard)
- Freigabe: Praktikant (anwalt: kein Zugriff, praktikant: Vollzugriff)
- Netzlaufwerke: Freigaben der anderen drei PCs
- Drucker: OKI B412 (PCL6) auf 213.54.10.101

### CL4

- Computername: CL4, Arbeitsgruppe: GRUPPE4
- IP-Adresse: 213.54.10.84, Subnetzmaske: 255.255.255.0
- Benutzer: anwalt (Administrator), praktikant (Standard)
- Freigabe: Vorlagen (anwalt: Vollzugriff, praktikant: nur lesen)
- Netzlaufwerke: Freigaben der anderen drei PCs
- Drucker: OKI B412 (PCL6) auf 213.54.10.101

