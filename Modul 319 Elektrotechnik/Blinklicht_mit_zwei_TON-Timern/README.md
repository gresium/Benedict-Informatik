# Blinklicht mit zwei TON-Timern (CODESYS 2.3)

Autorin: Gresa Hisa

## Idee
Ein Schalter (E1) lässt eine Lampe (A1) im Sekundentakt blinken. Zwei TON-Timer mit je 0.5 s und eine Rückführung über den Merker K1 erzeugen den Takt.

## Aufbau (FUP, `PLC_PRG`)
```
E1 ─┐
    AND ──► T1 (TON, 0.5 s) ──┬──► A1 (Lampe)
K1 ─┘ (negiert)             └──► T2 (TON, 0.5 s) ──► K1
```
- Solange E1 TRUE ist und K1 FALSE, läuft T1 an.
- Nach 0.5 s schaltet T1 die Lampe A1 ein und startet T2.
- Nach weiteren 0.5 s setzt T2 den Merker K1. Das sperrt den AND, T1 und T2 fallen zurück, die Lampe geht aus.
- K1 wird wieder FALSE, und der Ablauf beginnt von vorn. Ergebnis: Die Lampe blinkt mit ca. 1 Hz, solange E1 TRUE ist.

## Variablen
| Name | Typ | Bedeutung |
|------|-----|-----------|
| E1 | BOOL | Schalter (Eingang) |
| A1 | BOOL | Lampe (Ausgang) |
| K1 | BOOL | Merker für die Rückführung |
| T1, T2 | TON | Einschaltverzögerung, je 0.5 s |

## Visualisierung (`minivisual1`)
- Eine Schaltfläche, die `PLC_PRG.E1` setzt.
- Eine Lampe `L1`, deren Farbe über `PLC_PRG.A1` wechselt.

## Projekt öffnen und testen
1. `Blinklicht_mit_zwei_TON-Timern.pro` in CODESYS 2.3 öffnen.
2. Online → Simulation, dann Einloggen und Start.
3. In der Visu E1 betätigen. Die Lampe blinkt.

## Dateien
- `Blinklicht_mit_zwei_TON-Timern.pro`: CODESYS-Projekt (Programm und Visu)
- `Blinklicht_mit_zwei_TON-Timern_PLC_PRG.st`: Dieselbe Logik als lesbarer Text
