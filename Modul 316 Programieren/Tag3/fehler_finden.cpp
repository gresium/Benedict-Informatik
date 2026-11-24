// Fehler finden: korrigierte Version
// Mein Name: Gresa Hisa

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a;
    cout << "Ihre Glueckszahl!\n\n";
    cout << "Bitte Zahl eingeben: ";
    cin >> a;
    cout << "Ihre Glueckszahl lautet " << a + a * 10 / 7 << "\n"; 
    cout << "\nProgramm Ende\n";

    // system("PAUSE"); // Optional: Verwende eine plattformunabhängige Methode
    cout << "Druecken Sie die Eingabetaste, um fortzufahren...";
    cin.ignore();
    cin.get(); // Warten auf Benutzereingabe

    return 0;
}
