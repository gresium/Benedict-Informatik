// ***************************************************
// Projekt:      Array_FOR_EACH_Funktion
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: array_foreach_funktion.cpp
// ***************************************************

#include <iostream>

using namespace std;

// Prototyp
void ausgabeArray(const int feld[], int anzahl);

int main() {
	int Arrayname[5] = { 100, 110, 120, 130, 140 };

	cout << "Ausgabe mit for-each Schleife:" << endl;
	for (int inhalt : Arrayname) {
		cout << inhalt << endl;
	}

	cout << "\nAusgabe mit Funktion:" << endl;
	ausgabeArray(Arrayname, 5);
	return 0;
}

void ausgabeArray(const int feld[], int anzahl) {
	for (int i = 0; i < anzahl; i++) {
		cout << feld[i] << endl;
	}
}
