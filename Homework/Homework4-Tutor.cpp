/*******************************************************************************************************************

Victor Nguyen
CS111
9-25-18

In this program, the user will try to get the question right.

*******************************************************************************************************************/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
  float integer1, integer2;
  int total1, total2;
  unsigned seed = time(0);
  srand(seed);
  integer1 = (rand()/static_cast<float>(RAND_MAX)*1000);
  integer2 = (rand()/static_cast<float>(RAND_MAX)*1000);
  cout << "   " << setw(4) << static_cast<int>(integer1) << endl;
  cout << "+  " << setw(4) << static_cast<int>(integer2) << endl;
  cout << "_______" << endl;
  total1 = static_cast<int>(integer1) + static_cast<int>(integer2);
  cin >> total2;
  if (total1 == total2)
    {
      cout << "Congratulations, you got it correct." << endl;
    }
  else
    {
      cout << "Sorry you got the question wrong, the answer is " << total1 << endl;
    }
  return 0;
}
