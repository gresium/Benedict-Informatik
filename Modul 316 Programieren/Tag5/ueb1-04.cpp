// ***************************************************
// Projekt:      Kreisberechnung 1 (ueb1-04)
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
    double r, flaeche, umfang;

    cout << "Kreisberechnung 1\n";
    cout << "Berechnet Flaeche und Umfang fuer drei Radien.\n\n";
    cout << fixed << setprecision(2);

    r = 5.0;
    flaeche = r * r * PI;
    umfang = 2 * r * PI;
    cout << "Radius " << r << ": Flaeche = " << flaeche << ", Umfang = " << umfang << "\n";

    r = 10.0;
    flaeche = r * r * PI;
    umfang = 2 * r * PI;
    cout << "Radius " << r << ": Flaeche = " << flaeche << ", Umfang = " << umfang << "\n";

    r = 12.5;
    flaeche = r * r * PI;
    umfang = 2 * r * PI;
    cout << "Radius " << r << ": Flaeche = " << flaeche << ", Umfang = " << umfang << "\n\n";

    system("PAUSE");
    return 0;
}
