/*****************************************************************************

Victor Nguyen
CS 111
10-22-18

In this program, 10 random integers will be generated and the sum, average, and
smallest value will be calulate.

*****************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num;
  int sum;
  int low;
  double avger;
  srand(time(0));
  for (int counter = 0; counter <= 9; counter++)
    {
      num = rand() % 101;
      cout << num << " ";
      sum += num;
      if (counter == 0)
	{
	  low = num;
	}
      else if (num <= low)
	{
	  low = num;
	}
    }
  avger = static_cast<double>(sum) / 10;
  cout << endl << "The sum is " << sum << endl;
  cout << "The average is " << avger << endl;
  cout << "The lowest integer is " << low << endl;
  return 0;
}
