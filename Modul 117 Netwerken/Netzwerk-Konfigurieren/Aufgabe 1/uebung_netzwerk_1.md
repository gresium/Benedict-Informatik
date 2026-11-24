# Aufgabe 1 – Netzwerk konfigurieren (Übung Netzwerk A)

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Netzwerkeinstellungen (auf jedem PC)

| Computername | IP-Adresse | Subnetzmaske | Arbeitsgruppe |
|---|---|---|---|
| ICT1-01 | 195.200.50.11 | 255.255.255.0 | ICT1 |
| ICT1-02 | 195.200.50.121 | 255.255.255.0 | ICT1 |
| ICT1-03 | 195.200.50.13 | 255.255.255.0 | ICT1 |
| ICT1-04 | 195.200.50.14 | 255.255.255.0 | ICT1 |
| ICT1-05 | 195.200.50.15 | 255.255.255.0 | ICT1 |

> Hinweis: Auf dem Aufgabenblatt steht für den zweiten PC die Adresse 195.200.50.121 (die anderen enden auf 11, 13, 14, 15). Sie liegt im Netz 195.200.50.0/24 und funktioniert, ist aber möglicherweise ein Tippfehler für .12. Hier ist sie wie auf dem Blatt eingetragen.

## Benutzerkonten (auf jedem PC)

| Benutzername | Kontotyp | Passwort |
|---|---|---|
| user1 | Standardbenutzer | laut Aufgabenblatt |
| admin1 | Administrator | laut Aufgabenblatt |

Die Passwörter stehen absichtlich nicht in dieser Datei.

## Freigegebene Ordner

Auf jedem PC wird ein neuer Ordner erstellt und freigegeben. Name und Rechte sind frei gewählt:

| PC | Freigabename | Pfad | Rechte |
|---|---|---|---|
| ICT1-01 | Austausch1 | C:\Austausch1 | admin1: Vollzugriff, user1: Lesen |
| ICT1-02 | Austausch2 | C:\Austausch2 | admin1: Vollzugriff, user1: Lesen |
| ICT1-03 | Austausch3 | C:\Austausch3 | admin1: Vollzugriff, user1: Lesen |
| ICT1-04 | Austausch4 | C:\Austausch4 | admin1: Vollzugriff, user1: Lesen |
| ICT1-05 | Austausch5 | C:\Austausch5 | admin1: Vollzugriff, user1: Lesen |

## Vorgehen pro PC

1. Computername und Arbeitsgruppe ändern, neu starten.
2. Netzwerkkarte: IPv4 mit fester IP-Adresse und Subnetzmaske konfigurieren.
3. Benutzer `user1` (Standard) und `admin1` (Administrator) anlegen.
4. Ordner erstellen, freigeben und die Rechte setzen.
5. Von einem anderen PC aus die Freigabe über `\\ICT1-0X\Austausch X` testen.
