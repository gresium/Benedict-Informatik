// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 04: Fakultaet mit Schleife
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe04.cpp
// ***************************************************

#include <iostream>

using namespace std;

int fakultaet(int n);

int main() {
    int zahl = 5;
    int ergebnis = fakultaet(zahl);

    if (ergebnis < 0) {
        cout << "Fehler: n muss groesser oder gleich 0 sein." << endl;
    } else {
        cout << zahl << "! = " << ergebnis << endl;
    }
    return 0;
}

// Gibt -1 zurueck, wenn n negativ ist.
int fakultaet(int n) {
    if (n < 0) {
        return -1;
    }
    int ergebnis = 1;
    for (int i = 2; i <= n; i++) {
        ergebnis = ergebnis * i;
    }
    return ergebnis;
}
