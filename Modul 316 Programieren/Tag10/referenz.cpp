// ***************************************************
// Projekt:      Referenzen
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: referenz.cpp
// ***************************************************

#include <iostream>
using namespace std;

int main() {
	double preisApfel = 1.45, preisBirne = 0.85;
	double &preisReferenz = preisApfel;
	double const &preisKonstanteReferenz = preisApfel;

	cout << "Preise: " << preisApfel << " Fr., " << preisBirne << " Fr." << endl;
	cout << preisReferenz << " Fr." << endl;
	cout << preisKonstanteReferenz << " Fr." << endl;

	preisReferenz = preisBirne;
	cout << "Preise: " << preisApfel << " Fr., " << preisBirne << " Fr." << endl;

	//preisKonstanteReferenz = preisApfel; ???????????????????
}
