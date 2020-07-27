/****************************************************

Victor Nguyen
CS111
10/9/18

In this program, the do while loop will ask the user to enter 3 integers and find the max of the three and print it.

****************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int num1;
  int num2;
  int num3;
  char confirm;
  do {
    cout << "Enter first integer.";
    cin >> num1;
    cout << "Enter second integer.";
    cin >> num2;
    cout << "Enter third integer.";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
      {
	cout << "The largest integer out of the three is: " << num1 << endl;
      }
    else if (num2 > num1 && num2 > num3)
    {
      cout << "The largest integer out of the three is: " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2)
      {
	cout << "The largest integer out of the three is: " << num3 << endl;
      }
    cout << "Do you want to find the largest integer again? Enter Y or N.";
    cin >> confirm;
    if (confirm == 'N' || confirm == 'n')
      {
	cout << "You chose not to find another large integer." << endl;
      }
  } while (confirm == 'y' || confirm == 'Y');
  return 0;
}
