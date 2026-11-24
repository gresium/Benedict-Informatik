// ***************************************************
// Projekt:      Zufallszahlen_3a
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: Zufallszahlen_3.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
// Bevor die Zufallszahlen erstellt werden, sollte die Funktion
// srand() aufgerufen werden. Diese initialisiert den Zufallszahlen-Generator,
// um die Zufälligkeit der Zahlen zu gewährleisten.

// Hinweis: Dieser Code ist nicht vollständig!

	srand(time(NULL));

// Folgenden Zeilen erstellen die Zufallszahlen zwischen 0 und 10.
	int zahl1 = rand() % 10;
	int zahl2 = rand() % 10;
	int zahl3 = rand() % 10;
	int zahl4 = rand() % 10;
	int zahl5 = rand() % 10;

// Hier erfolgt die Ausgabe der Zahlen.
	cout << "Der Wert ist: " << zahl1 << endl;
	cout << "Der Wert ist: " << zahl2 << endl;
	cout << "Der Wert ist: " << zahl3 << endl;
	cout << "Der Wert ist: " << zahl4 << endl;
	cout << "Der Wert ist: " << zahl5 << endl << endl;

	system("PAUSE");
	return 0;
}
