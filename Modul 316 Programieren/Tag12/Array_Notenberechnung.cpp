// ***************************************************
// Projekt:      Array_Notenberechnung
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Array_Notenberechnung.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
	double noten[10], summe = 0;
	int anzahl = 10, i;
	cout << "*******************" << endl;
	cout << "* Notenberechnung *" << endl;
	cout << "*******************" << endl;

	cout << fixed << setprecision(1);
	// 10 Noten einlesen
	for (i = 0; i < anzahl; i++) {
		cout << "\nBitte geben Sie die Note Nr. " << i + 1 << " ein: ";
		cin >> noten[i];
	}

// Summe berechnen
	for (i = 0; i < anzahl; i++) {
		summe += noten[i];
	}
	// Hier erfolgt die Ausgabe.
	cout << "\nDie Summe ist : " << summe << endl;
	cout << "Der Durchschnitt von diesen 10 Noten ist : " << summe / anzahl << endl;

	system("PAUSE");
	return 0;
}
