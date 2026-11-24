// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 09: String-Laenge
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe09.cpp
// ***************************************************

#include <iostream>

using namespace std;

int stringLaenge(const char* text);

int main() {
    const char* text = "Programmieren macht Spass";
    cout << "Der Text hat " << stringLaenge(text) << " Zeichen." << endl;
    return 0;
}

int stringLaenge(const char* text) {
    int laenge = 0;
    while (text[laenge] != '\0') {
        laenge++;
    }
    return laenge;
}
