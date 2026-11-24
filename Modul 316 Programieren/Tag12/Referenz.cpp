// ***************************************************
// Projekt:      Referenz
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Referenz.cpp
// ***************************************************

#include <iostream>
using namespace std;

int main() {
	double preisApfel = 1.45, preisBirne = 0.85;
	double &preisReferenz = preisApfel;

	cout << &preisApfel << " Hier die Hex Adresse." << endl;

	double const &preisKonstanteReferenz = preisApfel;

	cout << "Preise: " << preisApfel << " Fr., " << preisBirne << " Fr." << endl;
	cout << preisReferenz << " Fr." << endl;
	cout << preisKonstanteReferenz << " Fr." << endl;

	cout << &preisReferenz << " Fr." << endl;
	cout << &preisKonstanteReferenz << " Fr." << endl;

	preisReferenz = preisBirne;
	cout << "Preise: " << preisApfel << " Fr., " << preisBirne << " Fr." << endl;

	preisApfel = 10.00;
	cout << "Preise: " << preisApfel << " Fr., " << preisReferenz << " Fr." << endl;

}
