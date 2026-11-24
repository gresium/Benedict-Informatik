// ***************************************************
// Projekt:      Getraenke Automat Version 1 (Uebung A)
// Author:       Gresa Hisa
// Datum:        20.11.2026
// Programmname: Uebung_A.cpp
// ***************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	/* Getraenke Automat Version 1 */

	cout << "Getraenke Automat\n\n";

	// Auswahl der Getraenke
	int sorte;
	cout << "Waehlen sie ihr Getraenk aus:\n";
	cout << "1) Wasser (0,50 Fr.)\n";
	cout << "2) Limonade (1,00 Fr.)\n";
	cout << "3) Bier (2,00 Fr.)\n\n";
	cout << "Geben sie 1, 2 oder 3 ein: ";
	cin >> sorte;

	// Überprüfen der Auswahl
	if (sorte < 1 || sorte > 3) {
		cout << "Ungueltige Auswahl. Bitte starten Sie das Programm erneut.\n";
		cin.ignore(); // Puffer leeren
		cin.get(); // Warten auf Benutzereingabe
		return 1; // Fehlercode zurückgeben
	}

	// Lege den zu zahlenden Betrag fest
	double preis = 0;
	switch (sorte) {
		case 1:
			preis = 0.5;
			break;
		case 2:
			preis = 1.0;
			break;
		case 3:
			preis = 2.0;
			break;
	}

	// Aufforderung zur Bezahlung
	double einwurf = 0;
	cout << fixed << setprecision(2);
	cout << "\nBitte werfen sie " << preis << " Fr. ein: ";
	cin >> einwurf;

	// Ueberpruefe Geldstueck
	if (einwurf == preis) {
		cout << "\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	} else {
		cout << "\nSie haben kein " << preis << " Fr. eingeworfen.\n";
	}

	cin.ignore(); // Puffer leeren
	cin.get(); // Warten auf Benutzereingabe
	return 0;
}
