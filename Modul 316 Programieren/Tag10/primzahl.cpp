// ***************************************************
// Projekt:      Primzahl
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: primzahl.cpp
// ***************************************************

#include <iostream>

using namespace std;

int main() {

    //Programmtitel
    cout << "Programm Primzahl"<<endl;
    cout << "-----------------"<<endl;
    cout << "Bestimmung, ob die Zahl eine Primzahl ist.";
    cout << endl;

    //Eingabe
    int zahl; //Eingegebene Zahl
    cout << "Geben Sie eine Zahl ein (int): ";
    cin >> zahl;

    //Verarbeitung
    int teiler=2; //fuer den Versuch, ob zahl:teiler aufgeht
    while ((zahl%teiler)&&(teiler<=zahl))
    {
      teiler++;
    }

    bool primzahl; //true, wenn die Zahl eine Primzahl ist
    if (teiler==zahl) primzahl=true;
       else primzahl=false;

    //Ausgabe
    if (primzahl) cout << endl << "Die Zahl ist eine Primzahl." << endl << endl;
       else cout << endl << "Die Zahl ist keine Primzahl." << endl << endl;
    return 0;
}
