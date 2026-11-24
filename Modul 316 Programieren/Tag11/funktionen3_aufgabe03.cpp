// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 03: Rekursive Fakultaet
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe03.cpp
// ***************************************************

#include <iostream>

using namespace std;

unsigned long long fakultaet(int n);

int main() {
    int zahl = 6;
    cout << zahl << "! = " << fakultaet(zahl) << endl;
    return 0;
}

// Rekursion: n! = n * (n-1)!, Abbruch bei n <= 1
unsigned long long fakultaet(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fakultaet(n - 1);
}
