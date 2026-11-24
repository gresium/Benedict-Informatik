// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 08: Funktion mit Zeiger veraendert Wert
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe08.cpp
// ***************************************************

#include <iostream>

using namespace std;

void erhoehe(int* zeiger);

int main() {
    int wert = 5;
    cout << "Vorher:  " << wert << endl;
    erhoehe(&wert);
    cout << "Nachher: " << wert << endl;
    return 0;
}

// Aendert den Wert an der uebergebenen Speicheradresse.
void erhoehe(int* zeiger) {
    *zeiger = *zeiger + 10;
}
