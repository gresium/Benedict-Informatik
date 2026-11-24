// ***************************************************
// Projekt:      If-Verzweigung (Alter)
// Author:       Gresa Hisa
// Datum:        18.11.2026
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int Alter;
  cout << "Gebe ein, wie alt du bist: ";
  cin >> Alter;
  //fflush(stdin);
  cout << "\n";
  if(Alter<14)
  {
    cout << "Du bist ein Kind\n";
  }

  if(Alter>=14 && Alter<18)
  //Hier sind es zwei Bedingungen.
  //Die beiden "&" bedeuten "und",
  //also muessen beide Bedingungen erfuellt sein.
  //Es gibt auch "oder".
  {
    cout << "Du bist ein Teenager\n";
  }

  if(Alter>=18)
  {
    cout << "Du bist erwachsen\n";
  }

  system("PAUSE");
  return 0;
}
