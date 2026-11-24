// ***************************************************
// Projekt:      Lernziel 5: Temperatur umrechnen
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Bitte gib die Temperatur in Celsius ein: ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;

    cout << fixed << setprecision(2);
    cout << "Temperatur in Celsius: " << celsius << endl;
    cout << "Temperatur in Fahrenheit: " << fahrenheit << endl;

    system("PAUSE");
    return 0;
}
