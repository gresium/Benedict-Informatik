// ***************************************************
// Projekt:      Lernziel 1: Variablen und Datentypen
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char name[] = "Max";     // Name als char-Array
    int alter = 25;          // Alter als int
    float groesse = 1.82f;   // Koerpergroesse als float
    double gewicht = 75.5;   // Gewicht als double
    bool ausbildung = true;  // Ausbildung vorhanden ja/nein

    cout << "Name: " << name << endl;
    cout << "Alter: " << alter << endl;
    cout << "Koerpergroesse: " << groesse << " m" << endl;
    cout << "Gewicht: " << gewicht << " kg" << endl;
    cout << "Ausbildung: " << (ausbildung ? "Ja" : "Nein") << endl;

    system("PAUSE");
    return 0;
}
