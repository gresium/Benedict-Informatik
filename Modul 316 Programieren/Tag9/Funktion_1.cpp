// ***************************************************
// Projekt:      Funktion_1
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: Funktion_1.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

// Das hier sind Globale Variablen.
// Sind also überall bekannt.
int a, b;

// Hier ist die Addiere-Funktion.
int addiere(int summand1, int summand2) {
	return (summand1 + summand2);
}

int main() {
	// Hier ist eine Lokale Variable.
	// Nur zur Demo!
	int summand1, summand2;
	cout << "Gebe die erste Zahl ein: ";
	cin >> a;
	cout << endl;
	cout << "Gebe die zweite Zahl ein: ";
	cin >> b;
	cout << endl;
	int summe = addiere(a, b);
	cout << "Summe von " << a << " und " << b << " ist " << summe;
	cout << endl << endl << endl;

	system("PAUSE");
	return 0;
}
