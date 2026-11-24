// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 03: Minimum zweier Zahlen
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe03.cpp
// ***************************************************

#include <iostream>

using namespace std;

int minimum(int x, int y);

int main() {
    int a = 17, b = 9;
    cout << "Das Minimum von " << a << " und " << b << " ist " << minimum(a, b) << endl;
    return 0;
}

int minimum(int x, int y) {
    if (x < y) {
        return x;
    }
    return y;
}
