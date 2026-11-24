// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 05: Funktion mit Zeiger: Quadrat
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe05.cpp
// ***************************************************

#include <iostream>

void berechneQuadrat(int* zahlPtr) {
	*zahlPtr = (*zahlPtr) * (*zahlPtr);
}

int main() {
	int zahl = 7;
	berechneQuadrat(&zahl);
	std::cout << zahl << std::endl;
	return 0;
}
