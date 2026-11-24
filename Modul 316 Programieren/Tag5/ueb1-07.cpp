// ***************************************************
// Projekt:      Dreiecksberechnung (ueb1-07)
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    double s, h, f;

    cout << "Dreiecksberechnung\n";
    cout << "Berechnet die Flaeche eines Dreiecks.\n\n";

    cout << "Bitte geben Sie die Seite ein> ";
    cin >> s;
    cout << "Bitte geben Sie die Hoehe ein> ";
    cin >> h;

    // Seite und Hoehe muessen groesser als Null sein
    if(s <= 0 || h <= 0)
    {
        cout << "\nFehler: Seite und Hoehe muessen groesser als Null sein!\n\n";
        system("PAUSE");
        return 1;
    }

    f = s * h / 2;

    cout << fixed << setprecision(2);
    cout << "\nDie Flaeche ist " << f << "\n\n";

    system("PAUSE");
    return 0;
}
