// ***************************************************
// Projekt:      Zahlenraten mit Funktionen (Uebung 3)
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: uebung_3.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funktion zur Generierung einer Zufallszahl zwischen 0 und 9
int generiereZufallszahl() {
	return rand() % 10;
}

// Funktion zur Eingabe des Zahlentipps durch den Benutzer
int holeBenutzerTipp() {
	int tipp;
	cout << "Geben Sie Ihren Zahlentipp ein (0 bis 9): ";
	cin >> tipp;

	// Eingabepuffer leeren (entspricht fflush(stdin) in C)
	cin.ignore(10000, '\n');

	return tipp;
}

// Funktion zur Ausgabe der Spielinformationen
void zeigeSpielInfo() {
	cout << "Neues Spiel, neues Glueck!" << endl;
	cout << "**************************" << endl << endl;
	cout << "Sie haben drei Versuche, die Zahl zu erraten!" << endl << endl;
}

int main() {
	// Zufallsgenerator initialisieren
	srand(static_cast<unsigned int>(time(nullptr)));

	// Spielinformationen anzeigen
	zeigeSpielInfo();

	// Geheime Zahl generieren
	int geheimeZahl = generiereZufallszahl();
	int benutzerTipp;
	const int MAX_VERSUCHE = 3;
	bool erraten = false;

	// Schleife für maximal 3 Versuche
	for (int versuch = 1; versuch <= MAX_VERSUCHE; versuch++) {
		cout << "Versuch " << versuch << " von " << MAX_VERSUCHE << ":" << endl;
		benutzerTipp = holeBenutzerTipp();

		if (benutzerTipp == geheimeZahl) {
			cout << "Sie haben richtig getippt!" << endl;
			erraten = true;
			break;
		} else {
			cout << "Leider falsch." << endl;
			if (versuch < MAX_VERSUCHE) {
				cout << "Versuchen Sie es noch einmal!" << endl << endl;
			}
		}
	}

	// Wenn die Zahl nicht erraten wurde, zeige die Lösung
	if (!erraten) {
		cout << endl << "Die Zahl lautete: " << geheimeZahl << endl << endl;
	}

	// Warten auf Benutzereingabe (entspricht system("PAUSE"))
	cout << "Druecken Sie die Eingabetaste, um das Programm zu beenden...";
	cin.get();

	return 0;
}
