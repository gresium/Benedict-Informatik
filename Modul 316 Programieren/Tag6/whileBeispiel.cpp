// ***************************************************
// Projekt:      while Beispiel
// Author:       Gresa Hisa
// Datum:        20.11.2026
// Programmname: whileBeispiel.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {											// Hier beginnt die Hauptfunktion.

	int i = 1;											// Das ist eine Integer Variable.

	while (i <= 5) {									// Hier beginnt die while-Schlaufe mit fünf durchläufe.
		cout << "Aktuelle Zahl ist: " << i << endl;		// Hier wird der Inhalt der Variable i ausgegeben.
		i++;											// Die Variable i wird um eine Stelle hochgezählt und gespeichert.
	}

	cout << endl;										// Das ist ein Zeilenumbruch für die Ausgabe.
	system("PAUSE");									// Hier wird gewartet auf einen Tastendruck.
	return 0;											// Das Programm wird beendet.
}
