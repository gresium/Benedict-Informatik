// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 02: Funktion mit einem Parameter
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe02.cpp
// ***************************************************

#include <iostream>

int verdoppeln(int zahl) {
	return zahl * 2;
}

int main() {
	int ergebnis = verdoppeln(5);
	std::cout << ergebnis << std::endl;
	return 0;
}
