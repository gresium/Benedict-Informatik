// Übung Nr. 2: Taschenrechner (Summe von 2 Kommazahlen)
// Mein Name: Gresa Hisa

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	float a, b;
	cout << "Taschenrechner\n";
	cout << "\nGeben Sie die 1. Zahl ein: ";
	cin >> a;
	cout << "\nGeben Sie die 2. Zahl ein: ";
	cin >> b;
	cout << fixed << setprecision(2);
	cout << "\nDie Summe ergibt " << a + b << "\n";

	system("PAUSE");
	return 0;
}
