/*********************************************************************************************

Victor Nguyen
CS111
10-15-18

In this program, the user will pick from a menu and it will calculate the total.

*********************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int choice;
  double total;
  const double TAX = 0.12;

  cout << "What would you life to order?" << endl;
  cout << "  " << "1.  Salmon" << endl;
  cout << "  " << "2.  Shrimp" << endl;
  cout << "  " << "3.  Sushi" << endl;
  cout << "  " << "4.  Steak" << endl;
  cout << "  " << "5.  Ribs" << endl;
  cout << "  " << "6.  Taco" << endl;
  cout << "  " << "7.  Enchiladas" << endl;
  cout << "  " << "8.  Fajita" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  switch(choice)
    {
    case 1:
    case 2:
    case 3:
      {
	total = 26 + (26 * TAX);
	cout << "$" << setprecision(2) << fixed << total << endl;
	break;
      }
    case 4:
    case 5:
      {
	total = 32 + (32 * TAX);
	cout << "$" << setprecision(2) << fixed << total << endl;
	break;
      }
    case 6:
    case 7:
    case 8:
      {
	total = 18 + (18 * TAX);
	cout << "$" << setprecision(2) << fixed << total << endl;
	break;
      }
    default:
      {
	cout << "Invalid choice" << endl;
      }
    }
  return 0;
}
