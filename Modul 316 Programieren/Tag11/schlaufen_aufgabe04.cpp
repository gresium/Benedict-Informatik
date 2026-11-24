// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 04: for-Schlaufen Zahlen-Zuwachs
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe04.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int zeile = 1; zeile <= 5; zeile++) {
        for (int zahl = 1; zahl <= zeile; zahl++) {
            cout << zahl;
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
