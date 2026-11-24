// ***************************************************
// Projekt:      Array_Messwerte
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: array_messwerte.cpp
// ***************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double messwerte[5];
	messwerte[0] = 23.0;
	messwerte[1] = 22.2;
	messwerte[2] = 21.7;
	messwerte[3] = 20.9;
	messwerte[4] = 20.5;

	cout << fixed << setprecision(1);
	cout << "Erster Wert (Index 0): " << messwerte[0] << endl;
	cout << "Letzter Wert (Index 4): " << messwerte[4] << endl;

	double summe = 0;
	for (int i = 0; i < 5; i++) {
		summe += messwerte[i];
	}
	cout << "Durchschnitt: " << summe / 5 << endl;
	return 0;
}
