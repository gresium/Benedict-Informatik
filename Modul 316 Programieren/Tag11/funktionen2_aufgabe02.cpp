// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 02: Summe zweier Zahlen
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe02.cpp
// ***************************************************

#include <iostream>

using namespace std;

int summe(int a, int b);

int main() {
    int x = 12, y = 30;
    cout << "Die Summe von " << x << " und " << y << " ist " << summe(x, y) << endl;
    return 0;
}

int summe(int a, int b) {
    return a + b;
}
