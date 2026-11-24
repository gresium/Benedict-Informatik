// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 04: Zeichenkette umkehren
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe04.cpp
// ***************************************************

#include <iostream>
#include <cstring>

using namespace std;

void umkehren(char* text);

int main() {
    char text[] = "Hallo Welt";
    cout << "Vorher:  " << text << endl;
    umkehren(text);
    cout << "Nachher: " << text << endl;
    return 0;
}

void umkehren(char* text) {
    int laenge = strlen(text);
    for (int i = 0; i < laenge / 2; i++) {
        char temp = text[i];
        text[i] = text[laenge - 1 - i];
        text[laenge - 1 - i] = temp;
    }
}
