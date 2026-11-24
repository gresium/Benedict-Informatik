// ***************************************************
// Projekt:      Spielfeld_2D
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: spielfeld.cpp
// ***************************************************

#include <iostream>

using namespace std;

int main() {
	// brett[Y][X]
	int brett[8][8] = { 0 };
	brett[2][1] = 1;
	brett[4][2] = 2;
	brett[3][5] = 3;
	brett[6][7] = 4;

	cout << "Spielfeld:" << endl << endl;
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			cout << brett[y][x] << " ";
		}
		cout << endl;
	}

	// Initialisierung mit 12 Werten: Die Felder werden Zeile fuer Zeile gefuellt.
	int brett2[8][8] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4 };

	cout << endl << "Initialisierung mit 12 Werten:" << endl << endl;
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			cout << brett2[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
