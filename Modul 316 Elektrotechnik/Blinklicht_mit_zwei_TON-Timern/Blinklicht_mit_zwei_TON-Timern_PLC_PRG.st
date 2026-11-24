PROGRAM PLC_PRG
VAR
	E1 : BOOL;
	K1 : BOOL;
	T1 : TON;
	T2 : TON;
	A1 : BOOL;
END_VAR

(* Erste Hälfte des Takts: läuft, solange E1 an ist und K1 noch nicht gesetzt *)
T1(IN := E1 AND NOT K1, PT := T#0.5s);
A1 := T1.Q;

(* Zweite Hälfte: setzt K1 und bricht damit den Durchlauf ab *)
T2(IN := T1.Q, PT := T#0.5s);
K1 := T2.Q;
