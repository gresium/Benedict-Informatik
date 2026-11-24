// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 01: Einfache Berechnung mit Rueckgabewert
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe01.cpp
// ***************************************************

#include <iostream>

using namespace std;

int summe(int a, int b);

int main() {
    int ergebnis = summe(25, 17);
    cout << "Die Summe ist " << ergebnis << endl;
    return 0;
}

int summe(int a, int b) {
    return a + b;
}
