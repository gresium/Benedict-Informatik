// ***************************************************
// Projekt:      Eiscafe Bestellautomat
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int anzahl;
    char sorte, extra;
    double preis1 = 0, preis2 = 0, gesamt;

    cout << "Eiscafe Bestellautomat\n\n";
    cout << "Wie viele Kugeln moechten Sie? (1 oder 2): ";
    cin >> anzahl;

    if(anzahl != 1 && anzahl != 2)
    {
        cout << "\nFehler: Es sind nur 1 oder 2 Kugeln moeglich.\n\n";
        system("PAUSE");
        return 1;
    }

    // ---------- 1. Kugel ----------
    cout << "\n1. Kugel\n";
    cout << "Welche Sorte? (V=Vanille, S=Schoko, E=Erdbeere, M=Matcha, K=Salzkaramell, H=Himbeer-Basilikum): ";
    cin >> sorte;

    if(sorte == 'V' || sorte == 'S' || sorte == 'E')
    {
        preis1 = 2.50;
    }
    else if(sorte == 'M' || sorte == 'K' || sorte == 'H')
    {
        preis1 = 3.20;
    }
    else
    {
        cout << "\nFehler: Unbekannte Sorte.\n\n";
        system("PAUSE");
        return 1;
    }

    cout << "Moechten Sie ein Extra? (S=Streusel, A=Sauce, N=keins): ";
    cin >> extra;

    if(extra == 'S')
    {
        preis1 = preis1 + 0.50;
    }
    else if(extra == 'A')
    {
        preis1 = preis1 + 0.80;
    }
    else if(extra != 'N')
    {
        cout << "\nFehler: Unbekanntes Extra.\n\n";
        system("PAUSE");
        return 1;
    }

    // ---------- 2. Kugel (nur falls gewaehlt) ----------
    if(anzahl == 2)
    {
        cout << "\n2. Kugel\n";
        cout << "Welche Sorte? (V=Vanille, S=Schoko, E=Erdbeere, M=Matcha, K=Salzkaramell, H=Himbeer-Basilikum): ";
        cin >> sorte;

        if(sorte == 'V' || sorte == 'S' || sorte == 'E')
        {
            preis2 = 2.50;
        }
        else if(sorte == 'M' || sorte == 'K' || sorte == 'H')
        {
            preis2 = 3.20;
        }
        else
        {
            cout << "\nFehler: Unbekannte Sorte.\n\n";
            system("PAUSE");
            return 1;
        }

        cout << "Moechten Sie ein Extra? (S=Streusel, A=Sauce, N=keins): ";
        cin >> extra;

        if(extra == 'S')
        {
            preis2 = preis2 + 0.50;
        }
        else if(extra == 'A')
        {
            preis2 = preis2 + 0.80;
        }
        else if(extra != 'N')
        {
            cout << "\nFehler: Unbekanntes Extra.\n\n";
            system("PAUSE");
            return 1;
        }
    }

    gesamt = preis1 + preis2;

    cout << fixed << setprecision(2);
    cout << "\nGesamtpreis: " << gesamt << " CHF\n\n";

    system("PAUSE");
    return 0;
}
