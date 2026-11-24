# IP-Grundlagen – Übung 1

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Frage 1
PCA hat 192.168.100.11 mit Subnetzmaske 255.255.255.0. Welche Einstellung funktioniert für PCB?

**Antwort: 192.168.100.254**

PCB muss im gleichen Netz (192.168.100.0) liegen und darf weder die Netzadresse (.0) noch die Broadcast-Adresse (.255) haben. Die .254 ist die letzte nutzbare Hostadresse.

- 192.168.11.0: anderes Netz und Netzadresse
- 197.168.100.10: anderes Netz (197 statt 192)
- 192.168.100.0: Netzadresse, nicht vergebbar
- 192.168.11.254: anderes Netz (11 statt 100)

## Frage 2
Welche Adresse ist eine gültige B-Klasse-Adresse?

**Antwort: 148.55.0.1** (erstes Oktett 128 – 191)

- 127.0.0.1: Klasse A (Loopback)
- 47.25.18.149: Klasse A
- 148.256.0.1: ungültig, 256 gibt es in keinem Oktett
- 193.170.10.1: Klasse C

## Frage 3
Welchen Bereich umfasst die Klasse A?

**Antwort: 0 – 127**

## Frage 4
Zuordnung der IP-Adressen zu den Subnetzmasken:

| Subnetzmaske | IP-Adresse |
|---|---|
| A) 255.0.0.0 | 2) 124.200.200.10 (Klasse A) und 5) 127.0.0.1 (Klasse A, Loopback) |
| B) 255.255.0.0 | 1) 191.12.126.120 (Klasse B) |
| C) 255.255.255.0 | 3) 223.2.8.2 (Klasse C) |
| keine | 4) 224.121.200.1 (Klasse D, Multicast) |

## Frage 5
Welche Adressen sind privat?

**Antwort: 192.168.11.27 und 10.81.23.97**

- 172.81.5.242: privat ist nur 172.16.x.x bis 172.31.x.x
- 169.254.8.14: APIPA, keine private Adresse
- 127.154.200.25: Loopback-Bereich

## Frage 6
Welche Adressen sind Broadcast-Adressen? (mit der Standardmaske der jeweiligen Klasse)

**Antwort: 201.143.11.255 und 195.0.255.255**

- 201.143.11.255: Klasse C, Hostanteil (letztes Oktett) nur 1
- 195.0.255.255: Klasse C, das letzte Oktett ist 255
- 45.148.255.255: Klasse A, die Broadcast-Adresse wäre 45.255.255.255
- 150.25.123.255: Klasse B, die Broadcast-Adresse wäre 150.25.255.255
- 179.48.0.0: Netzadresse eines B-Netzes

## Frage 7
Welche Aussagen stimmen für 127.0.0.1?

**Richtig:**
- 127.0.0.1 wird localhost genannt.
- 127.0.0.1 gehört zur Klasse A.
- Mit 127.0.0.1 greift man auf den eigenen Rechner zu (Loopback).

**Falsch:**
- «gültige IP-Adresse für eine Netzwerkkarte»: Die Adresse ist reserviert und wird nicht einer Netzwerkkarte zugewiesen.
- «Broadcast-Adresse»: nein.

## Frage 8
**Richtig:**
- Die höchstmögliche Zahl in einer IP-Adresse ist 255.
- Eine IP-Adresse besteht aus 32 Bit.
- Eine IP-Adresse kann in Netzteil und Hostteil unterteilt werden.
- Jede IP-Adresse braucht zwingend eine Subnetzmaske. Nur mit der Maske weiss der PC, welcher Teil das Netz ist.

**Falsch:**
- Ohne IP-Adresse kann man keine Webseite aufrufen.
