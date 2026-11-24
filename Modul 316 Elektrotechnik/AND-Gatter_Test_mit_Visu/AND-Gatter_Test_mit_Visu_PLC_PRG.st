PROGRAM PLC_PRG
VAR
	G3 : BOOL;
	G2 : BOOL;
	G1 : BOOL;
	M3 : BOOL;
	M1 : BOOL;
	M2 : BOOL;
END_VAR

(* Drei AND-Verknüpfungen mit je drei Eingängen *)
(* Achtung: Die Ausgänge sind teilweise ihre eigenen Eingänge und bleiben deshalb FALSE *)
G1 := M1 AND G2 AND G1;
G2 := M2 AND G1 AND G3;
G3 := M3 AND G3 AND G3;
