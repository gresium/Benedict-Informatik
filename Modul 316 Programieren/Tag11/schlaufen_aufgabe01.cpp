// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 01: for-Schlaufen Zahlen
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe01.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int zeile = 0; zeile < 5; zeile++) {
        for (int zahl = 1; zahl <= 5; zahl++) {
            cout << zahl;
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
