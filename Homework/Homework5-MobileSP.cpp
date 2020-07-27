/********************************************************************************************************************************************

Victor Nguyen
CS111
10-1-18

In this program, we will calculate the customer's bill

********************************************************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  char package;
  int mins;
  double total;
  const double PACKA = 39.99;
  const double PACKAE = 0.45;
  const double PACKB = 49.99;
  const double PACKBE = 0.40;
  const double PACKC = 59.99;
  cout << "Select a subscription package:" << endl;
  cout << "1. Package A" << endl;
  cout << "2. Package B" << endl;
  cout << "3. Package C" << endl;
  cin >> package;
  if (package == 'A')
    {
      cout << "How many minutes were used? ";
      cin >> mins;
      if (mins > 450)
	{
	  total = 39.99 + ((mins - 450) * PACKAE);
	  cout << "The total amount due is $" << total << endl;
	}
      else
	{
          total = 39.99;
          cout << "The total amount due is $" << total << endl;
	}
    }
  else if (package == 'B')
    {
      cout << "How many minutes were used? ";
      cin >> mins;
      if (mins > 900)
        {
          total = PACKB + ((mins - 900) * PACKBE);
          cout << "The total amount due is $" << total << endl;
        }
      else
        {
          total = PACKB;
          cout << "The total amount due is $" << total << endl;
        }
    }
  else if (package == 'C')
    {
      cout << "How many minutes were used? ";
      cin >> mins;
      total = PACKC;
      cout << "The total amount due is $" << total << endl;
    }
  else
    {
      cout << "Invalid Package" << endl;
    }
  return 0;
}
