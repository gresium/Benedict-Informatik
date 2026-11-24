// ***************************************************
// Projekt:      Uebung 1: Funktion addiere mit Tastatureingabe
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: uebung1_addiere.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int addiere(int summand1, int summand2) {
    return (summand1 + summand2);
}

int main() {
    int zahl1, zahl2;

    cout << "Gebe die erste Zahl ein: ";
    cin >> zahl1;
    cout << "Gebe die zweite Zahl ein: ";
    cin >> zahl2;

    int summe = addiere(zahl1, zahl2);
    cout << "Summe von " << zahl1 << " und " << zahl2 << " ist " << summe << "\n";

    system("PAUSE");
    return 0;
}
