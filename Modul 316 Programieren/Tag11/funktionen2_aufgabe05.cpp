// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 05: Zeiger zur Verdopplung
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe05.cpp
// ***************************************************

#include <iostream>

using namespace std;

void verdoppeln(int* zahl);

int main() {
    int wert = 21;
    cout << "Vorher:  " << wert << endl;
    verdoppeln(&wert);
    cout << "Nachher: " << wert << endl;
    return 0;
}

void verdoppeln(int* zahl) {
    *zahl = *zahl * 2;
}
