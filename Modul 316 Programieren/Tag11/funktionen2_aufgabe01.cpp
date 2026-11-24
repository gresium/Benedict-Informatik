// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 01: Quadrat einer Zahl
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe01.cpp
// ***************************************************

#include <iostream>

using namespace std;

int quadrieren(int zahl);

int main() {
    int wert = 7;
    cout << "Das Quadrat von " << wert << " ist " << quadrieren(wert) << endl;
    return 0;
}

int quadrieren(int zahl) {
    return zahl * zahl;
}
