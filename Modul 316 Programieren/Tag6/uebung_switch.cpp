// ***************************************************
// Projekt:      Uebung switch
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Eingabe;
    cout << "Geben Sie eine Zahl zwischen 1 und 4 ein : ";
    cin >> Eingabe;

    switch(Eingabe)
    {
        case 1 : cout << "Du hast 1 eingegeben" << "\n";
        break;
        case 2 : cout << "Du hast 2 eingegeben" << "\n";
        break;
        case 3 : cout << "Du hast 3 eingegeben" << "\n";
        break;
        case 4 : cout << "Du hast 4 eingegeben" << "\n";
        break;
        default: cout << "Unbekannte Eingabe?!" << "\n";
    }

    system("PAUSE");
    return 0;
}
