// ***************************************************
// Projekt:      Ein kleines Skript zum Studium
// Author:       Gresa Hisa
// Datum:        20.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int Meine_Vari=100;
    int Meine_Vari1(200);

    cout << "Das Ergebnis 1 lautet: " << Meine_Vari;
    cout << "\nDas Ergebnis 2 lautet: " << Meine_Vari1;
    cout << endl;

    const float vname = 4.50;
    float const vanme2 = 1.50;

    cout << fixed << setprecision(2);

    cout << "Das Ergebnis const lautet: " << vname;
    cout << "\nDas Ergebnis const 2 lautet: " << vanme2;
    cout << endl;

    cout << 100 << endl;

    for(char i = 'A'; i <= 'Z'; ++i)
    {
        cout << i;
    }

    char zeichen = 'A';
    for(int v = 0; v < 26; ++v)
    {
        cout << zeichen + v << ' '; // Ergebnis in int
    }
    cout << endl;

    for(int x = 0; x < 26; ++x)
    {
        cout << static_cast< char >(zeichen + x); // Ergebnis in char
    }

    cout << endl;

    // Die Rueckgabe der Praefixvariante ist ein lvalue, die Postfixvariante gibt ein rvalue zurueck.

    int lvalue=1;
    cout << ++lvalue << endl; // Erhoeht den Wert und gibt ihn zurueck

    lvalue=1;
    cout << lvalue++ << endl; // Erhoeht den Wert und gibt den alten Wert zurueck

    lvalue=1;
    cout << --lvalue << endl; // Erniedrigt den Wert und gibt ihn zurueck

    lvalue=1;
    cout << lvalue-- << endl; // Erniedrigt den Wert und gibt den alten Wert zurueck

    //getchar();
    system("PAUSE");

    return 0;
}
