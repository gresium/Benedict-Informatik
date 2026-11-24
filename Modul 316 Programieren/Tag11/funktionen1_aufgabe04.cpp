// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 04: Funktion mit Zeigern: vertauschen und addieren
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe04.cpp
// ***************************************************

#include <iostream>

void vertauscheUndAddiere(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	*a = *a + 10;
}

int main() {
	int x = 5;
	int y = 15;
	vertauscheUndAddiere(&x, &y);
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	return 0;
}
