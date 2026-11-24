// ***************************************************
// Projekt:      Funktion mit Referenz
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_referenz.cpp
// ***************************************************

#include <iostream>
using namespace std;

void aendernUeberReferenz(double &refEins, double const &refZwei) {
	refEins = refEins - 0.06;
	// refZwei = refZwei - 0.06;
}

int main() {
	double preisApfel = 1.45, preisBirne = 0.85;
	cout << "Preise: " << preisApfel << " " << preisBirne << endl;

	aendernUeberReferenz(preisApfel, preisBirne);
	cout << "Preise: " << preisApfel << " " << preisBirne << endl;
}
