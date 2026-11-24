// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 02: Wertuebergabe und Rueckgabe
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe02.cpp
// ***************************************************

#include <iostream>

using namespace std;

int verdoppeln(int zahl);

int main() {
    int wert = 8;
    cout << wert << " verdoppelt ist " << verdoppeln(wert) << endl;
    return 0;
}

int verdoppeln(int zahl) {
    return zahl * 2;
}
