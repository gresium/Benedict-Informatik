# Übung Filius 1

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Aufbau

4 Computer sind über Kabel mit einem Switch verbunden (Sterntopologie).

```
PC1 ─┐
PC2 ─┼── Switch
PC3 ─┤
PC4 ─┘
```

## Konfiguration

Netz: 175.20.x.y, Netzmaske: 255.255.0.0

| Rechnername | IP-Adresse | Netzmaske |
|---|---|---|
| PC1 | 175.20.10.1 | 255.255.0.0 |
| PC2 | 175.20.10.2 | 255.255.0.0 |
| PC3 | 175.20.10.3 | 255.255.0.0 |
| PC4 | 175.20.10.4 | 255.255.0.0 |

Auf allen Rechnern ist im Simulationsmodus die Befehlszeile installiert.

## Testplan

| was? | wo? | wie? | Erwartet | Resultat (ok = [x]) |
|---|---|---|---|---|
| Verbindung PC1 – PC2 | PC1 | ping 175.20.10.2 | Antworten kommen zurück | [ ] |
| Verbindung PC1 – PC3 | PC1 | ping 175.20.10.3 | Antworten kommen zurück | [ ] |
| Verbindung PC1 – PC4 | PC1 | ping 175.20.10.4 | Antworten kommen zurück | [ ] |
| Verbindung PC2 – PC3 | PC2 | ping 175.20.10.3 | Antworten kommen zurück | [ ] |
| Verbindung PC2 – PC4 | PC2 | ping 175.20.10.4 | Antworten kommen zurück | [ ] |
| Verbindung PC3 – PC4 | PC3 | ping 175.20.10.4 | Antworten kommen zurück | [ ] |

Die Spalte «Resultat» wird nach dem Test in Filius abgehakt.
