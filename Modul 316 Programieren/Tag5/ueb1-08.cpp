// ***************************************************
// Projekt:      Groessere zweier Zahlen (ueb1-08)
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double zahl1, zahl2;

    cout << "Vergleich zweier Zahlen\n\n";

    cout << "Bitte geben Sie die erste Zahl ein> ";
    cin >> zahl1;
    cout << "Bitte geben Sie die zweite Zahl ein> ";
    cin >> zahl2;

    if(zahl1 > zahl2)
    {
        cout << "\ndie erste Zahl ist die groessere\n\n";
    }
    else
    {
        cout << "\ndie zweite Zahl ist die groessere\n\n";
    }

    system("PAUSE");
    return 0;
}
