// Mein Name: Gresa Hisa

#include <iostream>
#include <iomanip>

using namespace std;

int main() {											// Hauptfunktion, der Einstiegspunkt des Programms
    float f = 3.14159265358979323846f;					// Deklaration einer float-Variablen 'f' und Initialisierung mit einer Pi-Konstanten
    double d = 3.14159265358979323846;					// Deklaration einer double-Variablen 'd' und Initialisierung mit einer Pi-Konstanten
    cout << "Float-Wert mit Standardausgabe:\n";		// Ausgabe eines Textes, der den nächsten Wert beschreibt
    cout << f << endl;									// Ausgabe des float-Wertes 'f' mit Standardpräzision
    cout << "\nFloat-Wert mit erhöhter Präzision:\n";	// Ausgabe eines Textes, der den nächsten Wert beschreibt
    cout << setprecision(20) << f << endl;				// Ausgabe des float-Wertes 'f' mit einer Präzision von 20 Stellen
    cout << "\nDouble-Wert mit Standardausgabe:\n";		// Ausgabe eines Textes, der den nächsten Wert beschreibt
    cout << d << endl;									// Ausgabe des double-Wertes 'd' mit Standardpräzision
    cout << "\nDouble-Wert mit erhöhter Präzision:\n";	// Ausgabe eines Textes, der den nächsten Wert beschreibt
    cout << setprecision(20) << d << endl;				// Ausgabe des double-Wertes 'd' mit einer Präzision von 20 Stellen
    cout << "\n\nDruecken Sie die Enter Taste.";		// Ausgabe eines Textes, der den Benutzer auffordert, die Enter-Taste zu drücken
    cin.get();											// Warten auf die Eingabe des Benutzers (drücken der Enter-Taste)
    return 0;											// Rückgabe von 0, um anzuzeigen, dass das Programm erfolgreich beendet wurde
}
