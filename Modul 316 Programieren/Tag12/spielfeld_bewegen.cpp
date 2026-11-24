// ***************************************************
// Projekt:      Spielfeld_Bewegen
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: spielfeld_bewegen.cpp
// ***************************************************

#include <iostream>

using namespace std;

// Prototypen
void printField(int *field);
void move(int *field, int *posX, int *posY, char zug);

int main() {
	int field[8][8] = { 0 }, posX = 0, posY = 0;
	char zug;

	// Spielfigur setzen
	field[posY][posX] = 1;

	cout << "\nBeenden mit x" << endl;

	do {
		printField(&field[0][0]);
		cout << "\nZug [w hoch, a links, s runter, d rechts]: ";
		cin >> zug;
		move(&field[0][0], &posX, &posY, zug);
	} while (zug != 'x');

	return 0;
}

// Ausgabe Spielfeld
void printField(int *field) {
	cout << endl;
	// Schleife fuer Zeilen, Y-Achse
	for (int i = 0; i < 8; i++) {
		// Schleife fuer Spalten, X-Achse
		for (int j = 0; j < 8; j++) {
			cout << *(field + i * 8 + j) << " ";
		}
		cout << endl;
	}
}

// Spielfigur bewegen
void move(int *field, int *posX, int *posY, char zug) {
	// alte Position loeschen
	*(field + *posY * 8 + *posX) = 0;

	// neue Position bestimmen
	switch (zug) {
		case 'w': (*posY)--; break;
		case 'a': (*posX)--; break;
		case 's': (*posY)++; break;
		case 'd': (*posX)++; break;
	}

	// Grenzueberschreitung pruefen
	if (*posX < 0) *posX = 7;
	if (*posX > 7) *posX = 0;
	if (*posY < 0) *posY = 7;
	if (*posY > 7) *posY = 0;

	// neue Position setzen
	*(field + *posY * 8 + *posX) = 1;
}
