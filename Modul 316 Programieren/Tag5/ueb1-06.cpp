// ***************************************************
// Projekt:      Quader (ueb1-06)
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    double l, b, h, v, o;

    cout << "Quaderberechnung\n";
    cout << "Berechnet Volumen und Oberflaeche eines Quaders.\n\n";

    cout << "Bitte geben Sie die Laenge ein> ";
    cin >> l;
    cout << "Bitte geben Sie die Breite ein> ";
    cin >> b;
    cout << "Bitte geben Sie die Hoehe ein> ";
    cin >> h;

    v = l * b * h;
    o = 2 * (l * b + l * h + b * h);

    cout << fixed << setprecision(2);
    cout << "\nDas Volumen ist " << v << "\n";
    cout << "Die Oberflaeche ist " << o << "\n\n";

    system("PAUSE");
    return 0;
}
