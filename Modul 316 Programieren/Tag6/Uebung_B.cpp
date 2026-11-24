// ***************************************************
// Projekt:      Getraenke Automat Version 2 (Uebung B)
// Author:       Gresa Hisa
// Datum:        20.11.2026
// Programmname: Uebung_B.cpp
// ***************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	/* Getränke Automat Version 2 */

	cout << "Getraenke Automat\n\n";

	// Auswahl der Getränke
	int sorte;
	cout << "Waehlen Sie Ihr Getraenk aus:\n";
	cout << "1) Wasser (0,50 Fr)\n";
	cout << "2) Limonade (1,00 Fr)\n";
	cout << "3) Bier (2,00 Fr)\n\n";
	cout << "Geben Sie 1, 2 oder 3 ein: ";
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

	// Eingabe der Menge
	int menge = 1;
	cout << "\nGeben Sie die gewuenschte Menge ein: ";
	cin >> menge;

	// Auf zwei Stellen setzen nach dem Punkt
	cout << fixed << setprecision(2);

	// Bezahlvorgang
	cout << "\n--- Bezahlvorgang ---\n";
	double einwurf;
	double zuZahlen = preis * menge;

	// Bezahlvorgang mit while-Schleife
	while (zuZahlen > 0.0) {
		cout << "\nEs fehlen noch " << zuZahlen << " Fr.";
		cout << "\nBitte werfen Sie ein Geldstueck ein: ";
		cin >> einwurf;

		// Eingeworfenen Betrag anrechnen
		zuZahlen -= einwurf;
	}

	// Ausgabe der Getränke mit while-Schleife
	cout << "\n--- Getraenkeausgabe ---\n";
	int i = 0; // Initialisierung des Zählers
	while (i < menge) {
		cout << "\nFlasche " << i + 1 << " von " << menge << " wurde ausgegeben.";
		i++; // Zähler erhöhen
	}

	cout << "\n\nVielen Dank, bitte entnehmen Sie Ihre Getraenke.\n";
	cin.ignore(); // Puffer leeren
	cin.get(); // Warten auf Benutzereingabe
	return 0;
}
