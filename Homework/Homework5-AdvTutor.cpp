/**********************************************************************

Victor Nguyen
CS111
10-1-18
In this program will used as a tutor to help students with +,-,*,/,square

*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
  char ops;
  char plus = '+';
  char minus = '-';
  char multi = '*';
  char divide = '/';
  char square = 's';
  int integer1, integer2, integer3;
  double total2, total1;
  unsigned seed = time(0);
  srand(seed);
  integer1 = (rand()/static_cast<double>(RAND_MAX)*100);
  integer2 = (rand()/static_cast<double>(RAND_MAX)*100);
  integer3 = (rand()/static_cast<double>(RAND_MAX)*100);
  cout << "Input +, -, *, /, or s" << endl;
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
	  cout << "Wrong, the correct answer is " << total1 << endl;
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
	  cout << "Wrong, the corect answer is " << total1 << endl;
	}
    }
  else if (ops == '*')
    {
      total1 = integer1 * integer2 * integer3;
      cout << "   " << setw(3) << integer1 << endl;
      cout << "   " << setw(3) << integer2 << endl;
      cout << "*  " << setw(3) << integer3 << endl;
      cout << "______" << endl;
      cin >> total2;
      if (total1 == total2)
        {
          cout << "Correct" << endl;
        }
      else
        {
          cout << "Wrong, the corect answer is " << total1 << endl;
        }
    }
  else if (ops == '/')
    {
      total1 = static_cast<double>(integer1) / integer2 / integer3;
      total1 = round(total1 * 10000) / 10000;
      cout << "   " << setw(3) << integer1 << endl;
      cout << "   " << setw(3) << integer2 << endl;
      cout << "/  " << setw(3) << integer3 << endl;
      cout << "______ (Round to 4 decimal places)" << endl;
      cin >> total2;
      if (total1 == total2)
        {
          cout << "Correct" << endl;
        }
      else
        {
          cout << "Wrong, the corect answer is " << total1 << endl;
        }
    }
  else if (ops == 's')
    {
      total1 = pow(integer1,2) + pow(integer2,2) + pow(integer3,2);
      cout << "   " << setw(3) << integer1 << endl;
      cout << "   " << setw(3) << integer2 << endl;
      cout << "s  " << setw(3) << integer3 << endl;
      cout << "______" << endl;
      cin >> total2;
      if (total1 == total2)
        {
          cout << "Correct" << endl;
        }
      else
        {
          cout << "Wrong, the corect answer is " << total1 << endl;
        }
    }
  else
    {
      cout << "Invalid operator" << endl;
    }

  return 0;
}
