// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 05: for-Schlaufen Sterne
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe05.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int zeile = 1; zeile <= 5; zeile++) {
        // Erst die Leerzeichen, dann die Sterne (rechtsbuendig)
        for (int leer = 0; leer < 5 - zeile; leer++) {
            cout << " ";
        }
        for (int stern = 0; stern < zeile; stern++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
