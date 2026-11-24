// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 10: Flaeche eines Rechtecks
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe10.cpp
// ***************************************************

#include <iostream>

float berechneFlaeche(float breite, float hoehe) {
	return breite * hoehe;
}

int main() {
	float b = 10.0f;
	float h = 5.0f;
	float flaeche = berechneFlaeche(b, h);
	std::cout << flaeche << std::endl;
	return 0;
}
