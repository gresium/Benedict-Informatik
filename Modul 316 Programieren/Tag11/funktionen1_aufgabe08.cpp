// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 08: C-String-Laenge
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe08.cpp
// ***************************************************

#include <iostream>
#include <cstring>

int laengeString(const char* str) {
	return std::strlen(str);
}

int main() {
	const char* text = "Hallo Welt";
	int laenge = laengeString(text);
	std::cout << laenge << std::endl;
	return 0;
}
