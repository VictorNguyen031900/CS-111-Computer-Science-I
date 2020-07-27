/***********************************************************************************************************************************

Victor Nguyen
CS111
10-4-18

In this program, the user will enter the amount of units sold and the program will calcualte the total with discount included if one.

************************************************************************************************************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

  const int UNIT_PRICE = 119;
  int unit;
  double total;
  cout << "Enter the amount of units sold" << endl;
  cin >> unit;

  if (unit >= 0 && unit <= 9)
    {
      total = unit * UNIT_PRICE;
      cout << "No Discount " << setprecision(2) << fixed << "$" << total << endl;
    }
  else if (unit >= 10 && unit <=19)
    {
      total = unit * UNIT_PRICE * (1 - 0.2);
      cout << "20% discount " << setprecision(2) << fixed << "$" << total << endl;
    }
  else if (unit >= 20 && unit <= 49)
    {
      total = unit * UNIT_PRICE * (1 - 0.3);
      cout << "30% discount " << setprecision(2) << fixed << "$" << total << endl;
    }
  else if (unit >= 50 && unit <= 99)
    {
      total = unit * UNIT_PRICE * (1 - 0.4);
      cout << "40% discount " << setprecision(2) << fixed << "$" << total << endl;
    }
  else if (unit >= 100)
    {
      total = unit * UNIT_PRICE * (1 - 0.5);
      cout << "50% discount " << setprecision(2) << fixed << "$" << total << endl;
    }
  else
    {
      cout << "Invalid number" << endl;
    }
  return 0;
}
