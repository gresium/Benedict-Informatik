// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 07: Dynamisch alloziertes Array
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe07.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

int* erstelleArray(int groesse) {
	int* neuesArray = new int[groesse];
	for (int i = 0; i < groesse; ++i) {
		neuesArray[i] = i * 2;
	}
	return neuesArray;
}

int main() {
	int groesse = 4;
	int* arrayPtr = erstelleArray(groesse);
	for (int i = 0; i < groesse; ++i) {
		std::cout << arrayPtr[i] << std::endl;
	}
	delete[] arrayPtr;
	return 0;
}
