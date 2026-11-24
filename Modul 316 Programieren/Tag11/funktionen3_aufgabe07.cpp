// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 07: Potenz berechnen
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe07.cpp
// ***************************************************

#include <iostream>

using namespace std;

long long potenz(int basis, int exponent);

int main() {
    int basis = 3, exponent = 4;
    cout << basis << " hoch " << exponent << " = " << potenz(basis, exponent) << endl;
    return 0;
}

// Gilt fuer exponent >= 0.
long long potenz(int basis, int exponent) {
    long long ergebnis = 1;
    for (int i = 0; i < exponent; i++) {
        ergebnis = ergebnis * basis;
    }
    return ergebnis;
}
