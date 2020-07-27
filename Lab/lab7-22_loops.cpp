/*************************************************************

Victor Nguyen
CS111
10/9/18

In this program, the user will input a number in the range of 20-100 and a while loop will check if it's out of the range.

*************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int number;
  cout << "Enter an integer between 20 and 100" << endl;
  cin >> number;
  while (number < 20 || number > 100)
    {
      cout << "Invalid Integer" << endl << "Enter a number between 20-100" << endl;
      cin >> number;
    }
  return 0;
}
