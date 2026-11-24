# Übung Windows 10 – Teil 2

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Einstellungen

| Einstellung | Wert |
|---|---|
| Computername | compi1 |
| Arbeitsgruppe | ICT1B |
| IP-Adresse | 145.20.10.51 |
| Benutzer 1 | wfurter (Werner Furter), Administrator |
| Benutzer 2 | ejovic (Emma Jovic), Standardbenutzer |
| Ordner | `Vorlagen`, freigegeben: wfurter Vollzugriff, ejovic nur lesen |
| Drucker | Lexmark (Modell frei wählbar, z. B. Lexmark MS821dn), IP 145.20.50.11, freigegeben |
| Druckerrechte | wfurter und ejovic: drucken und Drucker verwalten |

> Hinweis zur Subnetzmaske: Das Aufgabenblatt nennt keine Maske. PC (145.20.10.51) und Drucker (145.20.50.11) liegen nur mit der Maske **255.255.0.0** im gleichen Netz 145.20.x.x. Mit 255.255.255.0 wären sie in verschiedenen Netzen. Deshalb ist hier 255.255.0.0 verwendet.

## Vorgehen

1. Virtuelles Windows 10 starten.
2. Computername `compi1` und Arbeitsgruppe `ICT1B` einstellen, neu starten.
3. Netzwerkkarte: IPv4 mit IP 145.20.10.51 und Maske 255.255.0.0.
4. Benutzer `wfurter` (Administrator) und `ejovic` (Standard) anlegen, jeweils mit vollem Namen.
5. Ordner `Vorlagen` erstellen und freigeben: `wfurter` Vollzugriff, `ejovic` nur Lesen.
6. Drucker hinzufügen: Lokaler Drucker mit neuem Standard-TCP/IP-Port 145.20.50.11, Hersteller Lexmark, beliebiges Modell. Drucker freigeben.
7. Unter Druckereigenschaften → Sicherheit: `wfurter` und `ejovic` die Rechte «Drucken» und «Drucker verwalten» geben.
