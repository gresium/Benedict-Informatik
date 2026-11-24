// ***************************************************
// Projekt:      Funktion mit Rueckgabewert
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_rueckgabe.cpp
// ***************************************************

#include <iostream>
using namespace std;

double berechneGesamt(int, double);

int main() {
	int anzahlApfel = 3, anzahlBirne = 7;
	double preisApfel = 1.45, preisBirne = 0.85;
	double preisGesamt;

	preisGesamt = berechneGesamt(anzahlApfel, preisApfel);
	cout << "Gesamt: " << preisGesamt << endl;

	cout << "Gesamt: " << berechneGesamt(anzahlBirne, preisBirne) << endl;
}

double berechneGesamt(int anzahl, double preis) {
	double preisGesamt;
	preisGesamt = anzahl * preis;
	return preisGesamt;
}
