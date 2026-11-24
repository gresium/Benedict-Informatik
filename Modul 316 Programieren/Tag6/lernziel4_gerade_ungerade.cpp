// ***************************************************
// Projekt:      Lernziel 4: Gerade oder ungerade
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int zahl;

    cout << "Bitte gib eine Zahl ein: ";

    // Fehlermeldung, wenn die Eingabe keine Zahl ist
    if(!(cin >> zahl))
    {
        cout << "Bitte gib eine Zahl ein!" << endl;
    }
    else if(zahl % 2 == 0)
    {
        cout << "Die Zahl ist gerade." << endl;
    }
    else
    {
        cout << "Die Zahl ist ungerade." << endl;
    }

    system("PAUSE");
    return 0;
}
