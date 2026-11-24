// Übungen Rechenoperatoren
// Mein Name: Gresa Hisa

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	// Aufgabe 1
	int a = 0, b = 2, c = 5;

	a = b + c;       cout << "a = b + c       -> " << a << endl;   // 7
	a = b - c;       cout << "a = b - c       -> " << a << endl;   // -3
	a = c / b;       cout << "a = c / b       -> " << a << endl;   // 2
	a = c * b;       cout << "a = c * b       -> " << a << endl;   // 10

	// Rest aus Division berechnen
	a = c % b;       cout << "a = c % b       -> " << a << endl;   // 1
	a = c % 3;       cout << "a = c % 3       -> " << a << endl;   // 2

	// Prioritäten mit Klammern setzen
	a = 1 + b * c;   cout << "a = 1 + b * c   -> " << a << endl;   // 11
	a = (1 + b) * c; cout << "a = (1 + b) * c -> " << a << endl;   // 15

	// Aufgabe 2: Kurzschreibweise
	cout << endl;
	a = 1; b = 2;

	a += 1;          cout << "a += 1          -> " << a << endl;   // 2
	a += b * 4;      cout << "a += b * 4      -> " << a << endl;   // 10
	a /= 2;          cout << "a /= 2          -> " << a << endl;   // 5
	a %= 2;          cout << "a %= 2          -> " << a << endl;   // 1

	system("PAUSE");
	return 0;
}
