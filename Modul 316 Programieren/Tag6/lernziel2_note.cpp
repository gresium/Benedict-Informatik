// ***************************************************
// Projekt:      Lernziel 2: Verzweigungen (Note)
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int punkte;

    cout << "Bitte gib die Punkte ein (0-100): ";
    cin >> punkte;

    if(punkte < 0 || punkte > 100)
    {
        cout << "Bitte gib eine Note zwischen 0 und 100 ein!" << endl;
    }
    else if(punkte >= 90)
    {
        cout << "Sehr gut" << endl;
    }
    else if(punkte >= 70)
    {
        cout << "Gut" << endl;
    }
    else if(punkte >= 50)
    {
        cout << "Befriedigend" << endl;
    }
    else if(punkte >= 30)
    {
        cout << "Mangelhaft" << endl;
    }
    else
    {
        cout << "Nicht bestanden" << endl;
    }

    system("PAUSE");
    return 0;
}
