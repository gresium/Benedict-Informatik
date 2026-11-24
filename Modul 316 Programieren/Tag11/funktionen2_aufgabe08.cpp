// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 08: Zeichen zaehlen in C-String
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe08.cpp
// ***************************************************

#include <iostream>

using namespace std;

int zaehleZeichen(char* text);

int main() {
    char text[] = "Hallo Welt";
    cout << "Der Text \"" << text << "\" hat " << zaehleZeichen(text) << " Zeichen." << endl;
    return 0;
}

// Zaehlt bis zum abschliessenden '\0', ohne strlen().
int zaehleZeichen(char* text) {
    int anzahl = 0;
    while (*(text + anzahl) != '\0') {
        anzahl++;
    }
    return anzahl;
}
