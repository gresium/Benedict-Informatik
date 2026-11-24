# Aufgabe 4 – Gerber (Übung Netzwerk E)

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

Die ausführliche Dokumentation mit Netzwerkplan steht als PDF im gleichen Ordner (`Uebung_Netzwerk_E_Dokumentation.pdf`). Die Einrichtung lässt sich mit `netzwerk_e_einrichten.ps1` automatisieren.

## Aufgabe

4 PCs in der Arbeitsgruppe GERBER mit je einem freigegebenen Datenordner und je einem Netzwerkdrucker. Zwei Benutzer, Netzlaufwerke und Drucker bei den anderen verbunden. Danach dokumentieren und testen.

## Netzwerkkonfiguration

Netz 168.34.0.0, Subnetzmaske 255.255.0.0, Router (Standardgateway) 168.34.0.1.

| Computername | IP-Adresse | Subnetzmaske | Gateway | Arbeitsgruppe |
|---|---|---|---|---|
| z131_pc1 | 168.34.10.51 | 255.255.0.0 | 168.34.0.1 | GERBER |
| z131_pc2 | 168.34.10.52 | 255.255.0.0 | 168.34.0.1 | GERBER |
| z131_pc3 | 168.34.10.53 | 255.255.0.0 | 168.34.0.1 | GERBER |
| z131_pc4 | 168.34.10.54 | 255.255.0.0 | 168.34.0.1 | GERBER |

## Benutzerkonten (auf jedem PC gleich)

| Name | Benutzername | Kennwort | Typ |
|---|---|---|---|
| Alex Kuprecht | alkup | Yxcv4567 | Administrator |
| Maja Keller | makel | Ghjk2345 | Standardbenutzer |

Hinweis: Die Kennwörter stammen aus dem Aufgabenblatt und sind nur Übungswerte.

## Freigegebene Ordner

| PC | Ordner | Freigabename | UNC-Pfad |
|---|---|---|---|
| z131_pc1 | `C:\z131_pc1_Daten` | z131_pc1_Daten | `\\z131_pc1\z131_pc1_Daten` |
| z131_pc2 | `C:\z131_pc2_Daten` | z131_pc2_Daten | `\\z131_pc2\z131_pc2_Daten` |
| z131_pc3 | `C:\z131_pc3_Daten` | z131_pc3_Daten | `\\z131_pc3\z131_pc3_Daten` |
| z131_pc4 | `C:\z131_pc4_Daten` | z131_pc4_Daten | `\\z131_pc4\z131_pc4_Daten` |

Rechte (Freigabe und NTFS, es gilt die strengere):

| Benutzer | Freigabe | NTFS |
|---|---|---|
| alkup | Vollzugriff | Vollzugriff |
| makel | Lesen | Lesen, Ausführen, Ordnerinhalt anzeigen |
| Administratoren, SYSTEM | – | Vollzugriff |
| Jeder | entfernt | – |

Die Vererbung ist deaktiviert, sonst könnte makel lokal über «Authentifizierte Benutzer» schreiben.

## Netzlaufwerke

Der Buchstabe gehört fest zum Quell-PC.

| Laufwerk | Ziel | Verbunden auf |
|---|---|---|
| K: | `\\z131_pc1\z131_pc1_Daten` | pc2, pc3, pc4 |
| L: | `\\z131_pc2\z131_pc2_Daten` | pc1, pc3, pc4 |
| M: | `\\z131_pc3\z131_pc3_Daten` | pc1, pc2, pc4 |
| N: | `\\z131_pc4\z131_pc4_Daten` | pc1, pc2, pc3 |

## Drucker (OKI B430, Standard-TCP/IP-Port)

| Installiert auf | Druckername = Freigabename | IP-Adresse |
|---|---|---|
| z131_pc1 | z131_OKI_Laser1 | 168.34.10.101 |
| z131_pc2 | z131_OKI_Laser2 | 168.34.10.102 |
| z131_pc3 | z131_OKI_Laser3 | 168.34.10.103 |
| z131_pc4 | z131_OKI_Laser4 | 168.34.10.104 |

Rechte: alkup drucken, Drucker verwalten, Dokumente verwalten. makel nur drucken. «Jeder» entfernt.

Die 3 Drucker der anderen PCs werden über `\\z131_pcX\z131_OKI_LaserX` verbunden, zuerst als alkup (Treiberinstallation braucht Adminrechte), danach als makel.

## Konfigurationsschritte pro PC (X = 1 bis 4)

1. **Name und Arbeitsgruppe:** `Win + R` → `sysdm.cpl` → Computername `z131_pcX`, Arbeitsgruppe `GERBER`, neu starten.
2. **IP-Adresse:** `ncpa.cpl` → Ethernet → IPv4 → `168.34.10.5X`, `255.255.0.0`, Gateway `168.34.0.1`.
3. **Profil und Freigabe:** Netzwerkprofil «Privat», Netzwerkerkennung und Datei- und Druckerfreigabe einschalten.
4. **Benutzer:** `lusrmgr.msc` (Home: `netplwiz`) → alkup (Administrator) und makel (Standard) anlegen, «Kennwort läuft nie ab».
5. **Ordner:** `C:\z131_pcX_Daten` erstellen, freigeben, Freigabe- und NTFS-Rechte setzen, Vererbung deaktivieren.
6. **Drucker:** Standard-TCP/IP-Port `168.34.10.10X`, Treiber OKI B430, Name und Freigabename `z131_OKI_LaserX`, Sicherheit anpassen.
7. **Netzlaufwerke:** `\\z131_pcY` öffnen → Netzlaufwerk verbinden, für alkup und makel getrennt.
8. **Netzwerkdrucker:** Drucker der anderen PCs per Doppelklick verbinden, zuerst als alkup.

## Testplan

Jede Person testet auf ihrem PC alle Zeilen. In der Spalte «Resultat» steht die Erwartung, das tatsächliche Ergebnis kommt in «Status».

### Verbindungen

| Nr | Was? | Wo? | Wie? | Resultat (erwartet) | Status |
|---|---|---|---|---|---|
| 1 | IP-Konfiguration | jeder PC, CMD | `ipconfig /all` | IP 168.34.10.5X, Maske 255.255.0.0, Gateway 168.34.0.1 | [ ] |
| 2 | Name und Arbeitsgruppe | jeder PC | `sysdm.cpl` | z131_pcX, GERBER | [ ] |
| 3 | Verbindung per IP | zu den 3 anderen | `ping 168.34.10.5X` | Antwort, 0 % Verlust | [ ] |
| 4 | Verbindung per Name | zu den 3 anderen | `ping z131_pcX` | Name wird aufgelöst, Antwort | [ ] |
| 5 | Router | jeder PC | `ping 168.34.0.1` | Antwort vom Router | [ ] |
| 6 | Netzwerkumgebung | Explorer → Netzwerk | Netzwerk öffnen | alle 4 PCs sichtbar | [ ] |

### Zugriffsrechte auf die Ordner

| Nr | Was? | Wo? | Wie? | Resultat (erwartet) | Status |
|---|---|---|---|---|---|
| 7 | Netzlaufwerke verbunden | als alkup und makel | ab- und anmelden, Dieser PC | 3 Laufwerke der anderen PCs | [ ] |
| 8 | alkup liest | fremdes Laufwerk | Datei öffnen | öffnet sich | [ ] |
| 9 | alkup schreibt | fremdes Laufwerk | `test_alkup.txt` erstellen, ändern | erfolgreich | [ ] |
| 10 | alkup löscht | fremdes Laufwerk | `test_alkup.txt` löschen | erfolgreich | [ ] |
| 11 | makel liest | fremdes Laufwerk | Datei öffnen | öffnet sich | [ ] |
| 12 | makel erstellt | fremdes Laufwerk | neue Datei | «Zugriff verweigert» | [ ] |
| 13 | makel ändert | fremdes Laufwerk | Datei ändern, speichern | «Zugriff verweigert» | [ ] |
| 14 | makel löscht | fremdes Laufwerk | Datei löschen | «Zugriff verweigert» | [ ] |
| 15 | makel lokal | eigener PC, `C:\z131_pcX_Daten` | neue Datei | «Zugriff verweigert» | [ ] |

### Drucker

| Nr | Was? | Wo? | Wie? | Resultat (erwartet) | Status |
|---|---|---|---|---|---|
| 16 | Drucker im Netz | jeder PC, CMD | `ping 168.34.10.101` bis `.104` | Antwort von allen 4 | [ ] |
| 17 | Lokaler Drucker | eigener PC | Testseite drucken | Seite kommt | [ ] |
| 18 | Freigaben sichtbar | Explorer `\\z131_pcX` | Freigaben öffnen | Ordner und Drucker sichtbar | [ ] |
| 19 | Netzwerkdrucker verbunden | Drucker und Scanner | Liste prüfen | 3 Drucker der anderen PCs | [ ] |
| 20 | alkup druckt | Netzwerkdrucker | Dokument drucken | wird gedruckt | [ ] |
| 21 | makel druckt | Netzwerkdrucker | Dokument drucken | wird gedruckt | [ ] |
| 22 | alkup verwaltet | Netzwerkdrucker | Warteschlange anhalten, Auftrag von makel abbrechen | erfolgreich | [ ] |
| 23 | makel verwaltet nicht | Netzwerkdrucker | Auftrag von alkup abbrechen | «Zugriff verweigert» | [ ] |
