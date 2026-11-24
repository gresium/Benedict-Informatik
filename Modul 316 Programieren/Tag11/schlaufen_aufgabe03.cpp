// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 03: for-Schlaufen Zahlen-Gruppen
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe03.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int zahl = 5; zahl >= 1; zahl--) {
        for (int i = 0; i < 5; i++) {
            cout << zahl;
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
