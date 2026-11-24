// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 06: for-Schlaufen Zahlen-Pyramide
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe06.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int zeile = 1; zeile <= 5; zeile++) {
        // Leerzeichen vor den Zahlen
        for (int leer = 0; leer < 5 - zeile; leer++) {
            cout << " ";
        }
        // Zahlen von 1 bis 2*zeile-1
        for (int zahl = 1; zahl <= 2 * zeile - 1; zahl++) {
            cout << zahl;
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
