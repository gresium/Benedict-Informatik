// ***************************************************
// Projekt:      Kreisberechnung 2 (ueb1-05)
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    double radius, flaeche, umfang;

    cout << "Kreisberechnung 2\n";
    cout << "Berechnet Flaeche und Umfang eines Kreises.\n\n";

    cout << "bitte geben Sie den Radius ein> ";
    cin >> radius;

    flaeche = radius * radius * PI;
    umfang = 2 * radius * PI;

    cout << fixed << setprecision(2);
    cout << "die Flaeche ist " << flaeche << "\n";
    cout << "der Umfang ist " << umfang << "\n\n";

    system("PAUSE");
    return 0;
}
