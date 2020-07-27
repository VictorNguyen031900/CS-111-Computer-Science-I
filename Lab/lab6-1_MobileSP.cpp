/****************************************************************************************

Victor Nguyen
CS 111
10-2-18

In this program, the user will enter the month and it then calculates the number of minutes

****************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int monthNumber;
  int total;
  const int MINUTE = 60;
  cout << "Enter a month" << endl;
  cin >> monthNumber;
  if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12)
    {
      total = 744 * MINUTE;
      cout << "Amount of minutes for month " << monthNumber << " is " << total << " minutes" << endl;
    }
  else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11)
    {
      total = 720 * MINUTE;
      cout << "Amount of minutes for month " << monthNumber << " is " << total << " minutes" << endl;
    }
  else if (monthNumber == 2)
    {
      total = 672 * MINUTE;
      cout << "Amount of minutes for month " << monthNumber << " is " << total << " minutes" << endl;
    }
  else
    {
      cout << "Invalid number" << endl;
    }
  return 0;
}
