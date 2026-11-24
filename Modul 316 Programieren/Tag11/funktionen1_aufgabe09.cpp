// ***************************************************
// Projekt:      Workshop Funktionen 1 - Aufgabe 09: Minimum und Maximum mit Zeigerparametern
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen1_aufgabe09.cpp
// ***************************************************

#include <iostream>
#include <algorithm>
#include <limits>

void findeMinMax(int* array, int groesse, int* min, int* max) {
	if (groesse <= 0) return;
	*min = array[0];
	*max = array[0];
	for (int i = 1; i < groesse; ++i) {
		if (array[i] < *min) {
			*min = array[i];
		}
		if (array[i] > *max) {
			*max = array[i];
		}
	}
}

int main() {
	int zahlen[] = {10, 4, 22, 1, 15};
	int groesse = 5;
	int minWert;
	int maxWert;
	findeMinMax(zahlen, groesse, &minWert, &maxWert);
	std::cout << minWert << std::endl;
	std::cout << maxWert << std::endl;
	return 0;
}
