// ***************************************************
// Projekt:      Noten_mit_Funktionen
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: noten_funktionen.cpp
// ***************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int ANZAHL = 10;

// Prototypen
void einlesen(double noten[], int anzahl);
void berechnen(const double noten[], int anzahl, double &summe, double &durchschnitt);
void ausgabe(double summe, double durchschnitt);

int main() {
	double noten[ANZAHL];
	double summe, durchschnitt;

	einlesen(noten, ANZAHL);
	berechnen(noten, ANZAHL, summe, durchschnitt);
	ausgabe(summe, durchschnitt);
	return 0;
}

// Array in einer Funktion fuellen
void einlesen(double noten[], int anzahl) {
	for (int i = 0; i < anzahl; i++) {
		cout << "Bitte geben Sie die Note Nr. " << i + 1 << " ein: ";
		cin >> noten[i];
	}
}

// Summe und Durchschnitt (Referenzen als Rueckgabe)
void berechnen(const double noten[], int anzahl, double &summe, double &durchschnitt) {
	summe = 0;
	for (int i = 0; i < anzahl; i++) {
		summe += noten[i];
	}
	durchschnitt = summe / anzahl;
}

void ausgabe(double summe, double durchschnitt) {
	cout << fixed << setprecision(1);
	cout << "\nDie Summe ist : " << summe << endl;
	cout << "Der Durchschnitt ist : " << durchschnitt << endl;
}
