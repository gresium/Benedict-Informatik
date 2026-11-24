// ***************************************************
// Projekt:      Funktion mit Vorgabewerten
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_vorgabe.cpp
// ***************************************************

#include <iostream>
using namespace std;

void ausgabeGesamt(int anzahl = 1, double preis = 1.0) {
	double preisGesamt;
	preisGesamt = anzahl * preis;
	cout << "Gesamt: " << preisGesamt << endl;
}

int main() {
	int anzahlApfel = 3, anzahlBirne = 7;
	double preisApfel = 1.45, preisBirne = 0.85;

	ausgabeGesamt(anzahlApfel, preisApfel);
	ausgabeGesamt(anzahlApfel);
	ausgabeGesamt();
}
