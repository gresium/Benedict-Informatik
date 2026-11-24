# Treppenlichtsteuerung mit Visualisierung (CODESYS 2.3)

Autorin: Gresa Hisa

## Aufgabe
Treppenlichtsteuerung in CODESYS: Drei Taster (S1, S2, S3) schalten drei Lampen (E1, E2, E3) gleichzeitig ein. Nach einer einstellbaren Zeit gehen die Lampen automatisch wieder aus. Wird währenddessen ein Taster erneut betätigt, startet die Zeit neu (Retrigger). Dazu gibt es eine Visualisierung.

## Aufbau (FUP, `PLC_PRG`)
```
S1 ─┐
S2 ─┤ OR ──► TP1 (PT = T#1s) ──► TOF1 (PT = T#2s) ──┬──► E1
S3 ─┘                                               ├──► E2
                                                    └──► E3
```
- **OR:** Jeder der drei Taster kann das Licht einschalten.
- **TP1 (Impuls, 1 s):** Aus dem Tastendruck wird ein kurzer Impuls. Der TP reagiert nur auf die steigende Flanke.
- **TOF1 (Ausschaltverzögerung, 2 s):** Hält die Lampen nach dem Impuls noch 2 s an. Ein erneuter Tastendruck startet die Zeit neu.
- **Ergebnis:** Die Lampen gehen sofort an und leuchten insgesamt ca. 3 s (1 s Impuls + 2 s Nachlauf).

## Variablen
| Name | Typ | Bedeutung |
|------|-----|-----------|
| S1, S2, S3 | BOOL | Taster |
| E1, E2, E3 | BOOL | Lampen |
| TP1 | TP | Impulsgeber |
| TOF1 | TOF | Ausschaltverzögerung |

## Visualisierung (`test`)
- 3 Schaltflächen S1, S2, S3, jeweils auf die Variable `PLC_PRG.S1` bis `PLC_PRG.S3` gelegt.
- 3 Ellipsen E1, E2, E3 als Lampen. Farbwechsel über `PLC_PRG.E1` bis `PLC_PRG.E3`.

## Projekt öffnen und testen
1. `Treppenlichtsteuerung.pro` in CODESYS 2.3 öffnen.
2. Online → Simulation, dann Einloggen und Start.
3. In der Visu einen Taster etwas gedrückt halten. Die Lampen gehen an und nach ca. 3 s wieder aus.

Wichtig: Vor dem Test müssen S1, S2 und S3 alle FALSE sein, sonst gibt es keine steigende Flanke am TP.

## Dateien
- `Treppenlichtsteuerung.pro`: CODESYS-Projekt (Programm und Visu)
- `Treppenlichtsteuerung_PLC_PRG.st`: Dieselbe Logik als lesbarer Text
