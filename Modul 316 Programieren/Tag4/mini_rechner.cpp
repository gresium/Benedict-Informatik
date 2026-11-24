// ***************************************************
// Projekt:      MINI-Rechner
// Author:       Gresa Hisa
// Datum:        17.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // double, damit auch Kommazahlen eingegeben werden koennen
    double zahl;

    cout << "MINI - Rechner\n";
    cout << "---------------\n";
    cout << "Guten Tag!\n";
    cout << "Heute ist ein sch\x94ner Tag.\n";   // \x94 = ö (Windows-Konsole)
    cout << "Ausgaben werden in C++ so gemacht.\n";
    cout << "Bitte geben Sie eine Zahl ein: ";
    cin >> zahl;
    cout << "Ich Rechne: " << zahl << " * " << zahl << "\n";
    cout << "Das Ergebnis lautet: " << zahl * zahl << "\n";

    system("PAUSE");   // zeigt unter Windows: Drücken Sie eine beliebige Taste . . .
    return 0;
}
