# AND-Gatter-Test mit Visualisierung (CODESYS 2.3)

Autorin: Gresa Hisa

## Stand
Unfertiger Test, das Projekt ist ein Experiment mit drei AND-Verknüpfungen. Es ist keine fertige Steuerung.

## Aufbau (FUP, `PLC_PRG`)
Drei Netzwerke, jeweils ein AND mit drei Eingängen und einem Ausgang:

| Netzwerk | Eingänge | Ausgang |
|----------|----------|---------|
| 1 | M1, G2, G1 | G1 |
| 2 | M2, G1, G3 | G2 |
| 3 | M3, G3, G3 | G3 |

Die Ausgänge G1 bis G3 sind teilweise auch ihre eigenen Eingänge (Selbstrückführung). Weil G1, G2 und G3 anfangs FALSE sind, bleiben sie ohne weitere Logik dauerhaft FALSE.

## Variablen
| Name | Typ |
|------|-----|
| M1, M2, M3 | BOOL |
| G1, G2, G3 | BOOL |

## Visualisierung (`fenster`)
- Drei Schaltflächen M1, M2, M3, gebunden an `PLC_PRG.M1` bis `PLC_PRG.M3`.
- Drei Anzeigen G1, G2, G3. In der Visu sind sie an `PLC_PRG.M1` bis `PLC_PRG.M3` gebunden, also an die Schalter und nicht an die AND-Ausgänge.

## Mögliche Fortsetzung
- Die Anzeigen G1 bis G3 an die Variablen G1 bis G3 binden.
- Die Rückführung der Ausgänge auf sich selbst klären oder entfernen.

## Dateien
- `AND-Gatter_Test_mit_Visu.pro`: CODESYS-Projekt (Programm und Visu)
- `AND-Gatter_Test_mit_Visu_PLC_PRG.st`: Dieselbe Logik als lesbarer Text
