// ***************************************************
// Projekt:      Lernziel 3: Eingabe und Ausgabe
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string name, farbe;

    cout << "Bitte gib deinen Namen ein: ";
    getline(cin, name);
    cout << "Bitte gib deine Lieblingsfarbe ein: ";
    getline(cin, farbe);

    cout << "Hallo " << name << "! Deine Lieblingsfarbe ist " << farbe << "!" << endl;

    system("PAUSE");
    return 0;
}
