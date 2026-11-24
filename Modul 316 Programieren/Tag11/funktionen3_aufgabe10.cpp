// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 10: Funktion mit Bedingung (Gross oder Klein)
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe10.cpp
// ***************************************************

#include <iostream>

using namespace std;

const char* groesseText(int zahl);

int main() {
    cout << "5: " << groesseText(5) << endl;
    cout << "10: " << groesseText(10) << endl;
    cout << "11: " << groesseText(11) << endl;
    return 0;
}

const char* groesseText(int zahl) {
    if (zahl > 10) {
        return "Gross";
    }
    return "Klein";
}
