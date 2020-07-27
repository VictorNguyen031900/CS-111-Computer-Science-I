/***************************************************************************

Victor Nguyen
CS111
10/9/18

In this program, theres a while loop that outputs odd numbers from 20-30.

***************************************************************************/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
  int count = 21;
  while (count <= 30)
    {
      cout << count << "\t\t" << pow(count,2) << endl;
      count += 2;
    }
  return 0;
}
