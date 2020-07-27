/**********************************************************************

Victor Nguyen
CS111

In this program will used as a tutor to help students with subtracting and addition

*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  char ops;
  char plus = '+';
  char minus = '-';
  int integer1, integer2, integer3, total1, total2;
  unsigned seed = time(0);
  srand(seed);
  integer1 = (rand()/static_cast<double>(RAND_MAX)*100);
  integer2 = (rand()/static_cast<double>(RAND_MAX)*100);
  integer3 = (rand()/static_cast<double>(RAND_MAX)*100);
  cout << "Input + or -" << endl;
  cin.get(ops);
  if (ops == '+')
    {
      total1 = integer1 + integer2 + integer3;
      cout << "   " << setw(3) << integer1 << endl;
      cout << "   " << setw(3) << integer2 << endl;
      cout << "+  " << setw(3) << integer3 << endl;
      cout << "______" << endl;  
      cin >> total2;
      if (total1 == total2)
	{
	  cout << "Correct" << endl;
	}
      else
	{
	  cout << "Wrong" << endl;
	}
    }
  else if (ops == '-')
      {
	total1 = integer1 - integer2 - integer3;
	cout << "   " << setw(3) << integer1 << endl;
	cout << "   " << setw(3) << integer2 << endl;
	cout << "-  " << setw(3) << integer3 << endl;
	cout << "______" << endl;
	cin >> total2;
	if (total1 == total2)
	  {
	    cout << "Correct" << endl;
	  }
	else
	  {
	    cout << "Wrong" << endl;
	  }
      }
  else
    {
      cout << "Invalid operator" << endl;
    }
  return 0;
}
