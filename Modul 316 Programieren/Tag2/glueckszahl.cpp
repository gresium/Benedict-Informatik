// Glückszahl
// Mein Name: Gresa Hisa

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int a;
  cout << "Ihre Glueckszahl!\n\n" << endl;
  cout << "Bitte Zahl eingeben: ";
  cin >> a;
  cout << "Ihre Glueckszahl lautet " << a+a*10/7 << endl; 
  cout << "\nProgramm Ende\n" << endl;
//  getchar();
  system("PAUSE");
  return 0;
}
