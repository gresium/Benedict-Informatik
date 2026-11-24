// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 06: Array-Summe mit Zeiger
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe06.cpp
// ***************************************************

#include <iostream>

int summiereArray(int* array, int groesse) {
	int summe = 0;
	for (int i = 0; i < groesse; ++i) {
		summe += array[i];
	}
	return summe;
}

int main() {
	int zahlen[] = {1, 2, 3, 4, 5};
	int laenge = 5;
	int ergebnis = summiereArray(zahlen, laenge);
	std::cout << ergebnis << std::endl;
	return 0;
}
