# IP-Grundlagen — wie IP-Adressierung wirklich funktioniert

Diese Zusammenfassung erklärt die Konzepte hinter den Übungen (IP.docx, IP_Grundlagen.docx, IP_Grundlagen2.docx, IP_Grundlagen3.docx) — nicht die Lösungen selbst, sondern **wie IP-Adressierung, Subnetze und Netzwerkverkabelung tatsächlich funktionieren**.

---

## 1. Aufbau einer IP-Adresse (IPv4)

Eine IPv4-Adresse besteht aus **32 Bit**, dargestellt als **4 Oktette** (Bytes) zu je 8 Bit, getrennt durch Punkte:

```
192 . 168 . 100 . 11
8bit  8bit  8bit  8bit   =  32 Bit
```

Jedes Oktett kann einen Wert von **0–255** annehmen (2⁸ = 256 mögliche Werte pro Oktett). Eine Zahl über 255 in einer IP-Adresse ist deshalb **immer ungültig** (z. B. 148.**256**.0.1 existiert nicht).

Eine IP-Adresse lässt sich gedanklich in zwei Teile zerlegen:

- **Netzanteil (Network-ID):** identifiziert, zu welchem Netzwerk ein Gerät gehört
- **Hostanteil (Host-ID):** identifiziert das einzelne Gerät *innerhalb* dieses Netzwerks

Wo genau die Grenze zwischen Netz- und Hostanteil liegt, bestimmt die **Subnetzmaske**.

---

## 2. Die Subnetzmaske

Die Subnetzmaske sagt, welche Bits der IP-Adresse zum Netz gehören (1-Bits) und welche zum Host (0-Bits). Sie wird genauso wie eine IP-Adresse als 4 Oktette geschrieben.

| Maske | Binär (1. Oktett als Beispiel) | Bedeutung |
|---|---|---|
| 255.0.0.0 | 11111111 | nur das 1. Oktett ist Netzanteil |
| 255.255.0.0 | 11111111.11111111 | die ersten 2 Oktette sind Netzanteil |
| 255.255.255.0 | 11111111.11111111.11111111 | die ersten 3 Oktette sind Netzanteil |

**Wichtig:** Netzmaske und IP-Adresse werden bitweise UND-verknüpft, um die **Netzadresse** zu berechnen. Praktisch heisst das bei den "glatten" Standardmasken (255, 255.255, 255.255.255): Man übernimmt die Oktette, die bei der Maske "255" sind, unverändert aus der IP-Adresse, und setzt die restlichen Oktette auf 0.

**Beispiel:** IP 192.168.100.11, Maske 255.255.255.0
→ Netzadresse = 192.168.100.**0**

---

## 3. Netzklassen A, B, C (historisches Konzept)

Früher wurde der Adressraum fix in Klassen eingeteilt, erkennbar am **ersten Oktett**:

| Klasse | 1. Oktett (Bereich) | Standard-Maske | Netzanteil | Hostanteil | Hosts pro Netz |
|---|---|---|---|---|---|
| A | 0 – 127 | 255.0.0.0 | 8 Bit | 24 Bit | ~16,7 Mio. |
| B | 128 – 191 | 255.255.0.0 | 16 Bit | 16 Bit | ~65 534 |
| C | 192 – 223 | 255.255.255.0 | 24 Bit | 8 Bit | 254 |
| D | 224 – 239 | — | reserviert für **Multicast** | | |
| E | 240 – 255 | — | reserviert für **experimentelle Zwecke** | | |

Je "kleiner" die Klasse (A → C), desto **mehr Netze**, aber desto **weniger Hosts pro Netz** sind möglich — die Grenze verschiebt sich einfach von "viele Hosts, wenige Netze" zu "wenige Hosts, viele Netze".

> Heute wird praktisch nur noch mit **CIDR** (z. B. `/24` statt Klasse C) und frei wählbaren Subnetzmasken gearbeitet — das Klassensystem bestimmt aber immer noch, welche Default-Maske "zur Adresse gehört" und taucht in Prüfungsfragen entsprechend oft auf.

---

## 4. Netzadresse, Broadcast-Adresse und nutzbare Hosts

In jedem Subnetz sind **zwei Adressen reserviert** und dürfen keinem Gerät zugewiesen werden:

- **Netzadresse** (Hostanteil = alle 0): identifiziert das Netz selbst, kein Gerät
  → Beispiel: 192.168.100.**0** (bei /24)
- **Broadcast-Adresse** (Hostanteil = alle 1): adressiert **alle Geräte im Netz gleichzeitig**
  → Beispiel: 192.168.100.**255** (bei /24)

Alle Adressen **dazwischen** sind für Hosts nutzbar:

```
192.168.100.0   ← Netzadresse (nicht vergeben)
192.168.100.1   ┐
192.168.100.2   │ nutzbare Host-Adressen
...             │
192.168.100.254 ┘
192.168.100.255 ← Broadcast (nicht vergeben)
```

Bei einer /24-Maske (255.255.255.0) bleiben somit **254 nutzbare Adressen** von 256 insgesamt.

**Zwei Geräte "funktionieren zusammen"**, wenn sie:
1. **dieselbe Netzadresse** haben (also im gleichen Subnetz liegen) und
2. **unterschiedliche, gültige Host-Adressen** besitzen (nicht Netz- oder Broadcast-Adresse).

---

## 5. Private IP-Adressbereiche

Für lokale Netzwerke (die nicht direkt im Internet sichtbar sein sollen) sind feste Bereiche reserviert, die **nicht im öffentlichen Internet geroutet** werden:

| Klasse | Privater Bereich |
|---|---|
| A | 10.0.0.0 – 10.255.255.255 |
| B | 172.16.0.0 – 172.31.255.255 |
| C | 192.168.0.0 – 192.168.255.255 |

Geräte mit privaten Adressen erreichen das Internet nur über **NAT** (Network Address Translation) am Router/Gateway, der die private Adresse nach aussen in eine öffentliche umwandelt.

---

## 6. Sonderadressen

| Adresse / Bereich | Name | Bedeutung |
|---|---|---|
| 127.0.0.1 (ganz 127.0.0.0/8) | **Loopback / localhost** | zeigt immer auf das **eigene Gerät** — nie ins echte Netzwerk geroutet, kein physischer Netzwerkverkehr |
| 169.254.0.0/16 | **APIPA** (Automatic Private IP Addressing) | vergibt sich ein Windows-PC **selbst**, wenn er per DHCP keine Adresse bekommt — kein Internetzugriff möglich, nur lokale Kommunikation mit anderen APIPA-Geräten |
| x.x.x.255 (letztes Bit-Muster = alle 1) | **Broadcast** | adressiert alle Hosts im Subnetz |
| x.x.x.0 (Hostanteil = alle 0) | **Netzadresse** | identifiziert das Subnetz |

---

## 7. Warum eine IP-Adresse allein nicht reicht

Eine IP-Adresse ohne Subnetzmaske ist unvollständig: Das Gerät kennt zwar seine eigene Adresse, weiss aber nicht, welcher Teil Netz- und welcher Hostanteil ist — und kann daher nicht entscheiden, ob ein Zielgerät im selben Netz liegt (→ direkte Zustellung) oder in einem anderen (→ Paket muss zum **Gateway/Router** geschickt werden). Die Subnetzmaske ist deshalb zwingend nötig, sobald ein Gerät mit anderen kommunizieren soll.

(Eine Webseite **ohne** eigene IP-Adresse aufzurufen ist dagegen nicht möglich — jedes Gerät im Netzwerk braucht zwingend eine IP, um überhaupt adressierbar zu sein.)

---

## 8. Netzwerktopologien

Die Topologie beschreibt, **wie Geräte physisch/logisch miteinander verbunden sind**.

### Stern-Topologie (Star)
Alle Geräte sind einzeln mit einem zentralen Gerät (meist ein **Switch**) verbunden.

```
        PC
        |
PC --- Switch --- PC
        |
        PC
```

- **Vorteil:** Fällt eine Leitung oder ein Endgerät aus, sind alle anderen weiterhin funktionsfähig; einfach erweiterbar; einfache Fehlersuche.
- **Nachteil:** Fällt der zentrale Switch aus, ist das ganze Netz betroffen (Single Point of Failure).
- Heute die mit Abstand gebräuchlichste Topologie in LANs.

### Ring-Topologie
Jedes Gerät ist mit genau zwei Nachbarn verbunden, sodass ein geschlossener Ring entsteht; Daten laufen reihum.

- **Vorteil:** garantierte Bandbreite pro Gerät (Token-Verfahren), keine Kollisionen, da zu jedem Zeitpunkt nur ein Gerät senden darf.
- **Nachteil:** fällt eine Leitung oder ein Gerät aus, ist (ohne redundanten Doppelring) das ganze Netz unterbrochen; Erweiterung ist aufwändiger als beim Stern.

### Bus-Topologie
Alle Geräte hängen an einem gemeinsamen, linearen Kabel (Shared Medium).

- **Vorteil:** wenig Kabelaufwand.
- **Nachteil:** Kabelbruch legt das ganze Segment lahm; Kollisionsgefahr, da sich alle Geräte das Medium teilen; heute praktisch veraltet.

---

## 9. Netzwerkgrössen: PAN, LAN, MAN, WAN

| Begriff | Reichweite | Beispiel |
|---|---|---|
| **PAN** (Personal Area Network) | wenige Meter | Bluetooth zwischen Handy und Kopfhörer |
| **LAN** (Local Area Network) | ein Gebäude/Standort | Büronetzwerk, Heimnetzwerk |
| **MAN** (Metropolitan Area Network) | eine Stadt | Netzwerk eines Stadtwerks |
| **WAN** (Wide Area Network) | Länder/Kontinente, mehrere Standorte über öffentliche Leitungen verbunden | Filialen einer Firma in verschiedenen Städten, verbunden z. B. via Internet/VPN |

Sobald **mehrere räumlich getrennte Standorte** über öffentliche Infrastruktur (nicht firmeneigenes Kabel) miteinander vernetzt werden, handelt es sich um ein **WAN**.

---

## 10. Netzwerkkabel (Twisted Pair)

### Aufbau
Ein Twisted-Pair-Kabel enthält **8 Kupferadern**, paarweise verdrillt zu **4 Adernpaaren**. Die Verdrillung reduziert elektromagnetische Störeinflüsse zwischen den Paaren (Übersprechen).

**Schirmungsarten** (Kurzbezeichnung: Gesamtschirm / Schirm pro Paar):

| Bezeichnung | Gesamtschirmung | Schirmung je Aderpaar |
|---|---|---|
| U/UTP | keine | keine |
| S/UTP | Geflecht (S) | keine |
| U/FTP | keine | Folie (F) je Paar |
| S/FTP bzw. S/STP | Geflecht (S) gesamt | zusätzlich je Paar geschirmt (F/S) |

Eine stärkere Schirmung (S/STP) schützt besser vor äusseren elektromagnetischen Störungen (z. B. in Industrieumgebungen), macht das Kabel aber dicker, steifer und teurer. Twisted-Pair-Kabel sind **nicht grundsätzlich unempfindlich** gegenüber elektromagnetischen Feldern — das hängt von der Schirmung ab.

### Stecker
Der Standardstecker für Twisted-Pair-Ethernetkabel ist der **RJ-45** (8 Kontakte). RJ-11 ist der kleinere Stecker für Telefonleitungen.

### Kabelarten je nach Zweck
- **Patch-Kabel:** fertig konfektioniertes Kabel mit montierten Steckern an beiden Enden, für die Verbindung z. B. PC–Wanddose oder Switch–Patchpanel.
- **Installationskabel:** fest verlegtes Kabel ohne Stecker (wird in Wänden/Böden verlegt, Stecker/Dosen werden erst vor Ort montiert).
- **Gekreuztes Kabel (Crossover):** Sende- und Empfangsadern sind vertauscht; historisch nötig für Verbindungen zwischen zwei gleichartigen Geräten (z. B. Switch–Switch, PC–PC). Moderne Geräte mit Auto-MDI/MDI-X erkennen das automatisch und benötigen kein echtes Crossover-Kabel mehr.

### Längenbegrenzung
Ein Twisted-Pair-Kabelsegment (Kupfer) darf laut Standard maximal **100 Meter** lang sein, bevor das Signal zu stark gedämpft wird. Für grössere Distanzen werden Repeater/Switches zwischengeschaltet oder auf **Lichtwellenleiter (Glasfaser)** gewechselt.

### Twisted Pair vs. Glasfaser
- **Glasfaser (Lichtwellenleiter):** höhere Übertragungskapazität, grössere Reichweite, unempfindlich gegen elektromagnetische Störungen, aber teurer und aufwändiger zu verlegen/spleissen.
- **Twisted Pair:** günstiger, einfacher zu installieren/reparieren, Standard im LAN-Bereich; neuere Kategorien (z. B. Kat. 7, 7A, 8) erreichen inzwischen sehr hohe Geschwindigkeiten (bis in den zweistelligen Gbit/s-Bereich) über kurze Distanzen.

---

## Kurz zusammengefasst

- Eine IP-Adresse = 32 Bit, in Netz- und Hostanteil geteilt durch die **Subnetzmaske**.
- Die **Netzadresse** (Hostanteil = 0) und die **Broadcast-Adresse** (Hostanteil = 1) sind in jedem Subnetz reserviert und nicht vergebbar.
- Klassen A/B/C unterscheiden sich durch den Wertebereich des ersten Oktetts und die zugehörige Standardmaske.
- Private Bereiche (10.x, 172.16–31.x, 192.168.x) sind nicht im Internet routbar — NAT macht sie trotzdem internetfähig.
- 127.0.0.1 = localhost (eigenes Gerät), 169.254.x.x = APIPA (Selbstvergabe ohne DHCP).
- Die **Stern-Topologie** mit zentralem Switch ist heute Standard in LANs, weil ein Kabelausfall nur ein Gerät betrifft.
- Twisted-Pair-Kabel: max. 100 m, RJ-45-Stecker, Schirmung (U/S/F-TP) schützt vor Störungen.
