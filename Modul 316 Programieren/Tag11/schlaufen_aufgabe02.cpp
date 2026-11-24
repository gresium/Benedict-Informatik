// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 02: for-Schlaufen Alphabet
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe02.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int zeile = 0; zeile < 5; zeile++) {
        for (char buchstabe = 'A'; buchstabe <= 'E'; buchstabe++) {
            cout << buchstabe;
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
