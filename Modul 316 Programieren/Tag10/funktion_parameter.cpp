// ***************************************************
// Projekt:      Funktion mit Parametern und Prototyp
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_parameter.cpp
// ***************************************************

#include <iostream>
using namespace std;

void ausgabeGesamt(int, double);

int main() {
	int anzahlApfel = 3, anzahlBirne = 7;
	double preisApfel = 1.45, preisBirne = 0.85;

	ausgabeGesamt(anzahlApfel, preisApfel);
	ausgabeGesamt(anzahlBirne, preisBirne);
}

void ausgabeGesamt(int anzahl, double preis) {
	double preisGesamt;
	preisGesamt = anzahl * preis;
	cout << "Gesamt: " << preisGesamt << endl;
}
