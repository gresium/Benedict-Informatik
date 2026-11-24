// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 03: Funktion mit mehreren Parametern
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe03.cpp
// ***************************************************

#include <iostream>

float summiere(float zahl1, float zahl2) {
	return zahl1 + zahl2;
}

int main() {
	float ergebnis = summiere(10.5f, 5.2f);
	std::cout << ergebnis << std::endl;
	return 0;
}
