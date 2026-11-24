// ***************************************************
// Projekt:      Array_Initialisierung
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: array_initialisierung.cpp
// ***************************************************

#include <iostream>

using namespace std;

int main() {
	int i;

	// Alle Werte angegeben
	int punkte[5] = { 1, 3, 5, 7, 9 };
	cout << "Alle Werte angegeben:" << endl;
	for (i = 0; i < 5; i++) {
		cout << "Wert Index: " << i << " " << punkte[i] << endl;
	}

	// Weniger Werte als Feldgroesse: Rest wird mit 0 gefuellt
	int wenige[5] = { 1, 3, 5 };
	cout << "\nNur drei Werte angegeben:" << endl;
	for (i = 0; i < 5; i++) {
		cout << "Wert Index: " << i << " " << wenige[i] << endl;
	}

	// Alles mit Null
	int nullen[5] = { 0 };
	cout << "\nAlles mit Null:" << endl;
	for (i = 0; i < 5; i++) {
		cout << "Wert Index: " << i << " " << nullen[i] << endl;
	}

	// Feldgroesse durch Initialisierung bestimmen
	int automatisch[] = { 1, 2, 3 };
	int anzahl = sizeof(automatisch) / sizeof(automatisch[0]);
	cout << "\nGroesse automatisch bestimmt: " << anzahl << endl;
	for (int wert : automatisch) {
		cout << wert << endl;
	}
	return 0;
}
