// ***************************************************
// Projekt:      Formatierte Ausgabe mit Manipulatoren
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int anzahl = 2;
    double preis = 1.40;

    cout << "Anzahl: " << anzahl << endl;
    cout << "Preis: " << preis << " Fr." << endl << endl;

    cout << "Anzahl: " << setw(8) << anzahl << endl;
    cout << "Preis:  " << setw(8) << preis << " Fr." << endl << endl;

    cout << setfill('.');
    cout << "Anzahl: " << setw(8) << anzahl << endl;
    cout << "Preis:  " << setw(8) << preis << " Fr." << endl << endl;

    cout << fixed << setprecision(2);
    cout << "Preis:  " << setw(8) << preis << " Fr." << endl << endl;

    cout << left;
    cout << "Preis:  " << setw(8) << preis << " Fr." << endl << endl;

    system("PAUSE");
    return 0;
}
