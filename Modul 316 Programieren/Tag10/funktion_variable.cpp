// ***************************************************
// Projekt:      Funktion und Variablen (static)
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_variable.cpp
// ***************************************************

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
	x++;
	z++;
	cout << "x: " << x << endl;
	cout << "z: " << z << endl;
}
