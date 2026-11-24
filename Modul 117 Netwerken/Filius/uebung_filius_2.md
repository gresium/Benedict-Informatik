# Übung Filius 2

**Autor:** Gresa Hisa  
**Datum:** 25.11.2026  
**Modul:** 117 Netzwerke

## Aufbau

Zwei Netze, die über einen Vermittlungsrechner (Router) mit zwei Schnittstellen verbunden sind.

```
PC1  ─┐                              ┌─ PC11
      ├── Switch 1 ── Router ── Switch 2 ─┤
PC2  ─┘   (195.30.10.1 | 145.50.10.1)   └─ PC12
```

## Konfiguration

| Gerät | IP-Adresse | Netzmaske | Gateway |
|---|---|---|---|
| PC1 | 195.30.10.11 | 255.255.255.0 | 195.30.10.1 |
| PC2 | 195.30.10.12 | 255.255.255.0 | 195.30.10.1 |
| PC11 | 145.50.10.11 | 255.255.255.0 | 145.50.10.1 |
| PC12 | 145.50.10.12 | 255.255.255.0 | 145.50.10.1 |
| Router, Schnittstelle 1 | 195.30.10.1 | 255.255.255.0 | – |
| Router, Schnittstelle 2 | 145.50.10.1 | 255.255.255.0 | – |

Beim Router ist das Kästchen **«automatisches Routing»** aktiviert.

## Testplan

| was? | wo? | wie? | Erwartet | Resultat (ok = [x]) |
|---|---|---|---|---|
| Verbindung PC1 – PC2 | PC1 | ping 195.30.10.12 | Antworten kommen zurück | [ ] |
| Verbindung PC11 – PC12 | PC11 | ping 145.50.10.12 | Antworten kommen zurück | [ ] |
| Gateway Netz 1 erreichbar | PC1 | ping 195.30.10.1 | Antworten kommen zurück | [ ] |
| Gateway Netz 2 erreichbar | PC11 | ping 145.50.10.1 | Antworten kommen zurück | [ ] |
| Verbindung PC1 – PC11 (über Router) | PC1 | ping 145.50.10.11 | Antworten kommen zurück | [ ] |
| Verbindung PC1 – PC12 (über Router) | PC1 | ping 145.50.10.12 | Antworten kommen zurück | [ ] |
| Verbindung PC2 – PC11 (über Router) | PC2 | ping 145.50.10.11 | Antworten kommen zurück | [ ] |
| Verbindung PC12 – PC1 (über Router) | PC12 | ping 195.30.10.11 | Antworten kommen zurück | [ ] |

Die Spalte «Resultat» wird nach dem Test in Filius abgehakt.
