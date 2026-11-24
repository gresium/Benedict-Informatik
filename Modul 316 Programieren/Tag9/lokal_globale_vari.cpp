// ***************************************************
// Projekt:      Lokale und globale Variablen
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: lokal_globale_vari.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int G_Var = 25;		 // Das hier ist eine "Globale Variable"

int main() {
	int L_Vari = 12; // Das hier ist eine "Lokale Variable".
	int G_Var = 10;  // Das hier ist eine "Lokale Variable".

	cout << "\n\nInhalt - Lokale Variable G = " << G_Var;
	cout << "\n\nInhalt - Globale Variable G = " << ::G_Var; // Mit Scope Operator Zugriff Global.
	cout << "\n\nInhalt - Lokale Variable L = "  << L_Vari;

	cout << endl << endl;
	system("PAUSE");
	return 0;
}
