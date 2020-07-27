/**********************************************************************

Victor Nguyen
CS 111
10/9/18

In the program it will calculate the sum of all odd integers between 20 and 30.

**********************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int counter = 21;
  int total2;
  int totalall;
  while(counter <= 30)
    {
      totalall += counter;
      counter += 2;
    }
  cout << totalall << endl;
  return 0;
}
