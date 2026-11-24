// ***************************************************
// Projekt:      Funktionen ueberladen
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: funktion_ueberladen.cpp
// ***************************************************

#include <iostream>
using namespace std;

int addieren(int a, int b) {
	return a + b;
}

double addieren(double a, double b) {
	return a + b;
}

double addieren(double a, double b, double c, double d) {
	return a + b + c + d;
}

int main() {
	cout << "Summe: " << addieren(6, 13) << endl;
	cout << "Summe: " << addieren(6.5, 13.2) << endl;
	cout << "Summe: " << addieren(6.5, 13.2, 2.5, 11.3) << endl;
}
