// ***************************************************
// Projekt:      Funktion mit Parameterliste
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_liste.cpp
// ***************************************************

#include <iostream>
#include <cstdarg>
using namespace std;

double addieren(int anzahl, ...) {
	double summe = 0.0;
	va_list x;

	va_start(x, anzahl);
	for (int i = 1; i <= anzahl; i++)
		summe = summe + va_arg(x, double);
	va_end(x);

	return summe;
}

int main() {
	cout << "Summe: " << addieren(2, 6.0, 7.5) << endl;
	cout << "Summe: " << addieren(4, -4.5, 5.0, 1.5, 3.2) << endl;
}
