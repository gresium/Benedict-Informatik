// ***************************************************
// Projekt:      Funktion_2
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: Funktion_2.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

double eingabeZahl() {
	double eingabe;
	cout << "\nEingabe Zahl: ";
	cin >> eingabe;
	return eingabe;
}

double multipliziere(double zahl1, double zahl2) {
	return (zahl1 * zahl2);
}

void ausgabeErgebnis(double ergebnis) {
	cout << "\nErgebnis: " << ergebnis << endl;
}

int main() {
	double faktor1, faktor2, ergebnis;

// Hier erfolgt eine Titelausgabe.
	cout << "Mein erster Rechner! \n";

// Hier wird die Eingabe-Funktion zweimal aufgerufen.
	faktor1 = eingabeZahl();
	faktor2 = eingabeZahl();

// Hier wird die Verarbeitungs-Funktion aufgerufen und
// in der Variable "ergebnis" gespeichert.
	ergebnis = multipliziere(faktor1, faktor2);

// Hier wird die Ausgabe-Funkton mit einem Wert gestartet.
	ausgabeErgebnis(ergebnis);
// Hier wartet das PRG auf einen Tastendruck.
	system("PAUSE");
// Das PRG wird beendet.
	return 0;
}
