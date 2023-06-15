# Übung: Netzwerkdiagramm

## Aufgabenstellung

> Zeichnen Sie ein Netzwerkdiagramm, das folgendes darstellen soll:
> - Ein Netzwerk mit 6 PCs aufgeteilt in 2 Räume. In jedem Raum sind 3 PCs verbunden mit einem Switch. Daran ist jeweils auch ein Drucker angeschlossen.
> - Ein weiterer Switch verbindet die beiden Räume. Daran ist auch ein Router als Internetzugang angeschlossen.
> - Erstellen Sie ein Namenskonzept für die PCs und Drucker ("Kochrezept" für die Gerätenamen).
> - Beschriften Sie alle PCs und Drucker mit einem eindeutigen Namen und der fixen IP-Adresse. Auch der Router ist mit der IP-Adresse zu beschriften.
>
> Nutzen Sie entweder das Programm "draw.io" oder "Cisco Packet Tracer".

## Was ich umgesetzt habe

Ich habe das Diagramm in **Cisco Packet Tracer** gebaut, mit einem Namenskonzept rund um eine Küche ("Kochrezept"):

- **2 Räume** ("Kuche1" / "Kuche2"), jeder mit einem eigenen **Access-Switch** (Cisco 2950-24).
- In jedem Raum hängen **3 PCs** (Chef1–3 bzw. Chef4–6) und **1 Drucker** (Chefhelfer1 bzw. Chefhelfer2) per Straight-through-Kabel am jeweiligen Switch.
- Ein dritter Switch ("Lager") verbindet die beiden Raum-Switches über Crossover-Kabel (Switch-zu-Switch), wie in der Aufgabe gefordert.
- An diesem zentralen Switch hängt der **Router** ("Kochrezept", Cisco 1841) als Internetzugang, per Straight-through-Kabel.
- **Namenskonzept:** Alle Geräte sind nach dem Küchen-Thema benannt — Köche (PCs), Chefhelfer (Drucker), Küche/Lager (Switches) und Kochrezept (Router).
- **IP-Adressierung:** Jedem Gerät ist eine eigene, feste IP aus dem Bereich 192.168.x.1 zugewiesen (siehe Tabelle unten) — diese IPs stammen aus den Notizen im Packet-Tracer-File und sind im Diagramm direkt am Gerät beschriftet.
- Zusätzlich ist ein unbenutzter PC ("PC6") im File vorhanden, der an kein Gerät angeschlossen ist und daher im Diagramm nicht dargestellt wird.

## Geräte- und IP-Übersicht

| Gerät | Typ | Raum / Rolle | Port | IP-Adresse |
|---|---|---|---|---|
| Chef1 | PC | Raum 1 | Fa0 → Kuche1 Fa0/1 | 192.168.11.1 |
| Chef2 | PC | Raum 1 | Fa0 → Kuche1 Fa0/2 | 192.168.12.1 |
| Chef3 | PC | Raum 1 | Fa0 → Kuche1 Fa0/3 | 192.168.13.1 |
| Chefhelfer1 | Drucker | Raum 1 | Fa0 → Kuche1 Fa0/4 | 192.168.14.1 |
| Kuche1 | Switch (2950-24) | Raum 1 | Fa0/5 → Lager Fa0/2 (Crossover) | 192.168.10.1 |
| Chef4 | PC | Raum 2 | Fa0 → Kuche2 Fa0/3 | 192.168.15.1 |
| Chef5 | PC | Raum 2 | Fa0 → Kuche2 Fa0/2 | 192.168.17.1 |
| Chef6 | PC | Raum 2 | Fa0 → Kuche2 Fa0/1 | 192.168.18.1 |
| Chefhelfer2 | Drucker | Raum 2 | Fa0 → Kuche2 Fa0/4 | 192.168.19.1 |
| Kuche2 | Switch (2950-24) | Raum 2 | Fa0/5 → Lager Fa0/1 (Crossover) | 192.168.9.1 |
| Lager | Switch (2950-24), zentral | verbindet beide Räume | Fa0/3 → Kochrezept Fa0/0 | 192.168.7.1 |
| Kochrezept | Router (1841) | Internetzugang | Fa0/0 → Lager Fa0/3 | 192.168.8.1 |

## Diagramm

Siehe `Netzwerkdiagramm.png`.

**Legende:**
- durchgezogene Linie = Straight-through-Kabel (Endgerät  Switch, Switch  Router)
- gestrichelte Linie = Crossover-Kabel (Switch  Switch)
