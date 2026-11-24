PROGRAM PLC_PRG
VAR
	S1 : BOOL;
	S2 : BOOL;
	S3 : BOOL;
	E1 : BOOL;
	E2 : BOOL;
	E3 : BOOL;
	TP1 : TP;
	TOF1 : TOF;
END_VAR

(* Jeder Taster löst einen Impuls von 1 s aus *)
TP1(IN := S1 OR S2 OR S3, PT := T#1s);

(* Ausschaltverzögerung 2 s: Lampen bleiben nach dem Impuls noch an *)
TOF1(IN := TP1.Q, PT := T#2s);

(* Alle drei Lampen gleichzeitig *)
E1 := TOF1.Q;
E2 := TOF1.Q;
E3 := TOF1.Q;
