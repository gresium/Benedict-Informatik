# IP-Grundlagen – Fragen und Antworten

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

| Frage | Antwort |
|---|---|
| Aus wie vielen Bit besteht eine IP-Adresse? | 32 Bit (4 × 8) |
| Wie heissen die drei im Netzwerk brauchbaren IP-Klassen? | A, B, C |
| Von wo bis wo geht das 8-Bit- bzw. A-Klassen-Netz? | 0 – 127 (127 ist für Loopback reserviert) |
| Von wo bis wo geht das 16-Bit- bzw. B-Klassen-Netz? | 128 – 191 |
| Von wo bis wo geht das 24-Bit- bzw. C-Klassen-Netz? | 192 – 223 |
| Subnetzmaske eines A-Klassen-Netzes | 255.0.0.0 |
| Subnetzmaske eines B-Klassen-Netzes | 255.255.0.0 |
| Subnetzmaske eines C-Klassen-Netzes | 255.255.255.0 |
| Broadcast-Adresse eines A-Klassen-Netzes (Beispiel) | 10.255.255.255 |
| Broadcast-Adresse eines B-Klassen-Netzes (Beispiel) | 181.21.255.255 |
| Broadcast-Adresse eines C-Klassen-Netzes (Beispiel) | 205.56.9.255 |
| Netzadresse eines A-Klassen-Netzes (Beispiel) | 10.0.0.0 |
| Netzadresse eines B-Klassen-Netzes (Beispiel) | 181.21.0.0 |
| Netzadresse eines C-Klassen-Netzes (Beispiel) | 192.168.1.0 |
| Privater Adressbereich der A-Klasse | 10.x.y.z |
| Privater Adressbereich der B-Klasse | 172.16.x.y – 172.31.x.y |
| Privater Adressbereich der C-Klasse | 192.168.x.y |
| Wie nennt man die IP-Adresse 127.0.0.1? | localhost (Loopback) |

Bei der Broadcast-Adresse sind alle Bits des Hostanteils 1. Bei der Netzadresse sind alle Bits des Hostanteils 0. Darum gehört zum B-Klassen-Netz 181.21.0.0 die Broadcast-Adresse 181.21.255.255.
