// ***************************************************
// Projekt:      Zwei Funktionen (verbessert)
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: zwei_funktionen.cpp
// ***************************************************

#include <iostream>

using namespace std;

// Prototypen
int addAndCheck(int a, int b);
void reduceToFifty(int &summe);

int main() {
	int num1, num2;
	cout << "Geben Sie die erste Zahl ein: ";
	cin >> num1;
	cout << "Geben Sie die zweite Zahl ein: ";
	cin >> num2;
	int result = addAndCheck(num1, num2);
	cout << "Das Ergebnis ist: " << result << endl;
	cout << "\n\nDruecken Sie die Enter Taste.";
	cin.ignore(10000, '\n');
	cin.get();
	return 0;
}

// Funktion 1: addiert die Zahlen. Ist die Summe groesser als 50,
// wird sie an Funktion 2 uebergeben. Das Resultat ist immer 50.
int addAndCheck(int a, int b) {
	int summe = a + b;
	if (summe > 50) {
		reduceToFifty(summe);
	} else {
		summe = 50;
	}
	return summe;
}

// Funktion 2: reduziert die Summe (Referenz!) schrittweise bis 50.
void reduceToFifty(int &summe) {
	for (; summe > 50; --summe) {
		cout << "\nDie Summe ist: " << summe << endl;
	}
}
