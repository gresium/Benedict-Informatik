// ***************************************************
// Projekt:      Funktion mit statischer Variable
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: funktion_variable.cpp
// ***************************************************

// Funktion mit "Statische Variable"

#include <iostream>
using namespace std;

void hallo();

int main() {
	int i;
	hallo();
	for (i = 1; i <= 3; i++)
		hallo();
	hallo();
}

void hallo() {
	int x = 0;
	static int z = 0;
	// Durch static wird der letzte Wert in z "Lokal in der Funktion hello()" erhalten.
	// Static benötigt immer einen "Anfangswert"
	x++;
	z++;
	cout << "x: " << x << endl;
	cout << "z: " << z << endl;
}
