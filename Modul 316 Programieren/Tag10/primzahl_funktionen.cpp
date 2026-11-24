// ***************************************************
// Projekt:      Primzahl mit Funktionen
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: primzahl_funktionen.cpp
// ***************************************************

#include <iostream>

using namespace std;

// Prototypen: Die Funktionen stehen nach dem Hauptprogramm
void Title();
int In();
bool Work(int zahl);
void Out(bool primzahl);

int main() {
    // Im Hauptprogramm andere Variablennamen als in den Funktionen
    int eingabe;
    bool istPrim;

    Title();
    eingabe = In();
    istPrim = Work(eingabe);
    Out(istPrim);

    return 0;
}

// Programmtitel: unechte Funktion
void Title() {
    cout << "Programm Primzahl" << endl;
    cout << "-----------------" << endl;
    cout << "Bestimmung, ob die Zahl eine Primzahl ist.";
    cout << endl;
}

// Eingabe: echte Funktion mit dem Resultat zahl
int In() {
    int zahl; // Eingegebene Zahl
    cout << "Geben Sie eine Zahl ein (int): ";
    cin >> zahl;
    return zahl;
}

// Verarbeitung: echte Funktion, Resultat true, wenn die Zahl eine Primzahl ist
bool Work(int zahl) {
    int teiler = 2; // fuer den Versuch, ob zahl:teiler aufgeht
    while ((zahl % teiler) && (teiler <= zahl)) {
        teiler++;
    }

    bool primzahl; // true, wenn die Zahl eine Primzahl ist
    if (teiler == zahl) primzahl = true;
    else primzahl = false;

    return primzahl;
}

// Ausgabe: unechte Funktion
void Out(bool primzahl) {
    if (primzahl) cout << endl << "Die Zahl ist eine Primzahl." << endl << endl;
    else cout << endl << "Die Zahl ist keine Primzahl." << endl << endl;
}
