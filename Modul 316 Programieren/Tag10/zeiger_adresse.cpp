// ***************************************************
// Projekt:      Zeiger und Adressen
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: zeiger_adresse.cpp
// ***************************************************

#include <iostream>
using namespace std;

int main() {
	double preisApfel = 1.45, preisBirne = 0.85;
	double *preisZeiger;

	preisZeiger = &preisApfel;
	// cout << preisZeiger << endl;

	cout << preisApfel << " Fr." << endl;
	cout << *preisZeiger << " Fr." << endl;

	preisZeiger = &preisBirne;
	// cout << preisZeiger << endl;

	cout << preisBirne << " Fr." << endl;
	cout << *preisZeiger << " Fr." << endl;
}
