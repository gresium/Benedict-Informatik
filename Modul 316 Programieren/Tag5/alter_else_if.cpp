// ***************************************************
// Projekt:      Alter mit else if
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
  cout << endl;
  if(Alter < 14)
  {
    cout << "Du bist ein Kind\n";
  }
  else if(Alter>=14 && Alter<18)
  {
    cout << "Du bist ein Teenager\n";
  }
  else
  {
    cout << "Du bist erwachsen\n";
  }
  system("PAUSE");
  return 0;
}
