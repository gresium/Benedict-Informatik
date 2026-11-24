// ***************************************************
// Projekt:      Workshop Schlaufen und Array - Aufgabe 07: Array umgekehrte Ausgabe
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: schlaufen_aufgabe07.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int ar[5] = {10, 20, 50, 40, 60};

    cout << "Element in reverse order is given below" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << ar[i] << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
}
