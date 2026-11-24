// ***************************************************
// Projekt:      Funktionen mit Zeigern und Wertuebergabe
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_zeiger.cpp
// ***************************************************

// Lösung zu Funktionen mit Zeigern und Wertübergaben

#include <iostream>
using namespace std;

void aendernUeberWert(double wertEins, double wertZwei) {
	wertEins = wertEins - 0.10;
	wertZwei = wertZwei - 0.10;
}

void aendernUeberZeiger(double *zeigerEins, double *zeigerZwei) {
	*zeigerEins = *zeigerEins - 0.10;
	*zeigerZwei = *zeigerZwei - 0.10;
}

int main() {
	double preisApfel = 1.45, preisBirne = 0.85;
	cout << "Preise: " << preisApfel << " " << preisBirne << endl;

	aendernUeberWert(preisApfel, preisBirne);
	cout << "Preise: " << preisApfel << " " << preisBirne << endl;

	aendernUeberZeiger(&preisApfel, &preisBirne);
	cout << "Preise: " << preisApfel << " " << preisBirne << endl;
}
