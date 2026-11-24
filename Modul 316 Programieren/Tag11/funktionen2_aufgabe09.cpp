// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 09: Potenzfunktion
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe09.cpp
// ***************************************************

#include <iostream>

using namespace std;

int potenz(int basis, int exponent);

int main() {
    int basis = 2, exponent = 10;
    cout << basis << " hoch " << exponent << " = " << potenz(basis, exponent) << endl;
    return 0;
}

// Gilt nur fuer exponent >= 0.
int potenz(int basis, int exponent) {
    int ergebnis = 1;
    for (int i = 0; i < exponent; i++) {
        ergebnis = ergebnis * basis;
    }
    return ergebnis;
}
