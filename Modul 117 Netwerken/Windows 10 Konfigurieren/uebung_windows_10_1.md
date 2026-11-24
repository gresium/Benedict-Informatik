# Übung Windows 10 konfigurieren

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Einstellungen

| Einstellung | Wert |
|---|---|
| Computername | Hisa (Nachname) |
| Arbeitsgruppe | GRUPPEC |
| IP-Adresse | 211.25.13.51 |
| Subnetzmaske | 255.255.255.0 |
| Administratorkonto | admin1 (eigene Wahl), mit Kennwort |
| Standardkonto | user1 (eigene Wahl), mit Kennwort |
| Freigegebener Ordner | `C:\Freigabe`, Freigabename `Freigabe`, für beide Konten freigegeben |

Kennwörter stehen absichtlich nicht in dieser Datei.

## Vorgehen

1. Virtuelles Windows 10 starten.
2. Rechtsklick auf «Dieser PC» → Eigenschaften → Einstellungen ändern → Ändern: Computername `Hisa`, Arbeitsgruppe `GRUPPEC`, neu starten.
3. Netzwerkeinstellungen → Adapteroptionen ändern → Ethernet0 → Eigenschaften → Internetprotokoll Version 4: IP 211.25.13.51, Maske 255.255.255.0.
4. Einstellungen → Konten → Familie und andere Benutzer: Konto `admin1` (Kontotyp Administrator) und Konto `user1` (Standard) anlegen, je mit Kennwort.
5. Ordner `C:\Freigabe` erstellen → Eigenschaften → Freigabe → Erweiterte Freigabe → Berechtigungen: `admin1` und `user1` hinzufügen.

## Testplan

| was? | wo? | wie? | Erwartet | Resultat (ok = [x]) |
|---|---|---|---|---|
| Computername | Eigenschaften von «Dieser PC» | Anzeigen | Hisa | [ ] |
| Arbeitsgruppe | Eigenschaften von «Dieser PC» | Anzeigen | GRUPPEC | [ ] |
| IP-Konfiguration | Eingabeaufforderung | `ipconfig` | IPv4 211.25.13.51, Maske 255.255.255.0 | [ ] |
| Netzwerkkarte funktioniert | Eingabeaufforderung | `ping 211.25.13.51` | Antworten kommen zurück | [ ] |
| Zugriff Administrator | Anmeldung als admin1 | `C:\Freigabe` öffnen, Datei anlegen | Datei kann angelegt werden | [ ] |
| Zugriff Standardbenutzer | Anmeldung als user1 | `C:\Freigabe` öffnen, Datei anlegen | entspricht den vergebenen Rechten | [ ] |
| Zugriff übers Netz | anderer PC im Netz | `\\211.25.13.51\Freigabe` öffnen | Ordner öffnet sich nach Anmeldung | [ ] |
