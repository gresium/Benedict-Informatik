// ***************************************************
// Projekt:      Methoden
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

// Gibt einen Wert aus
void showWert(int wert)
{
    cout << "der Wert ist: " << wert << endl;
}

// Gibt das Doppelte des Wertes zurueck
int verdoppeln(int wert)
{
    return wert * 2;
}

// Gibt den doppelten Wert aus
void showDoppelwert(int wert)
{
    cout << "der doppelte Wert ist: " << wert << endl;
}

// Gibt das Produkt zweier Werte zurueck
int mult(int a, int b)
{
    return a * b;
}

// Gibt das Produkt aus
void showProdukt(int produkt)
{
    cout << "das Produkt ist: " << produkt << endl;
}

// Gibt das Quadrat eines Wertes aus
void showQuadrat(int wert)
{
    cout << wert << " zum Quadrat ist: " << wert * wert << endl;
}

int main()
{
    int i, j, e;

    i = 5; j = 10;
    showWert(i);               // der Wert ist: 5
    showWert(j);               // der Wert ist: 10
    showWert(i + j);           // der Wert ist: 15

    i = 12;
    e = verdoppeln(i);
    showDoppelwert(e);         // der doppelte Wert ist: 24
    i = 25;
    e = verdoppeln(i);
    showDoppelwert(e);         // der doppelte Wert ist: 50

    i = 5; j = 8;
    e = mult(i, j);
    showProdukt(e);            // das Produkt ist: 40
    i = 7; j = 7;
    e = mult(i, j);
    showProdukt(e);            // das Produkt ist: 49

    i = 8;
    showQuadrat(i);            // 8 zum Quadrat ist: 64
    i = 12;
    showQuadrat(i);            // 12 zum Quadrat ist: 144

    system("PAUSE");
    return 0;
}
