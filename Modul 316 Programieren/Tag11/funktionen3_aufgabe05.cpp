// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 05: Gerade oder ungerade
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe05.cpp
// ***************************************************

#include <iostream>

using namespace std;

bool istGerade(int zahl);

int main() {
    int zahl1 = 14, zahl2 = 7;
    cout << zahl1 << (istGerade(zahl1) ? " ist gerade." : " ist ungerade.") << endl;
    cout << zahl2 << (istGerade(zahl2) ? " ist gerade." : " ist ungerade.") << endl;
    return 0;
}

bool istGerade(int zahl) {
    return zahl % 2 == 0;
}
