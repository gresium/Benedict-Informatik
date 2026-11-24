// ***************************************************
// Projekt:      Schleifen: while, for, do while
// Author:       Gresa Hisa
// Datum:        21.11.2026
// Programmname: schleifen.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // while-Schleife: Zahlen von 1 bis 5 ausgeben
    cout << "while-Schleife:\n";
    int i = 1;
    while(i <= 5)
    {
        cout << "Zahl " << i << "\n";
        i++;
    }

    // for-Schleife: Zahlen von 1 bis 5 ausgeben (Zaehlen beginnt bei 0)
    cout << "\nfor-Schleife:\n";
    int k;
    for(k = 0; k < 5; k++)
    {
        cout << "Zahl " << k + 1 << "\n";
    }

    // do-while-Schleife: der Block wird mindestens einmal ausgefuehrt
    cout << "\ndo-while-Schleife:\n";
    int alter;
    do
    {
        cout << "\nBitte geben sie ihr Alter ein: ";
        cin >> alter;
    } while(alter < 18);
    cout << "Danke. Hier dein Bier. Prost!\n";

    system("PAUSE");
    return 0;
}
