/************************************************************************************************************************

Victor Nguyen
CS111
11-1-18

In this program the user will pick from a menu and and enter intgers depending on the choice and the program will output
depending on the choice

*************************************************************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

void menu();
int factorial(int);
bool isPrime(int);
double mixedSum(int, int);

int main()
{
  int choice;
  int number;
  int halfNumber;
  int nFact1;
  int nFact2;
  int base;
  int maxExp;
  double total;
  cout << "Program has started..." << endl;
  do{
    menu();
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  cout << endl << "You choose choice " << choice << "." << endl << endl;
	  cout << "Enter a number: ";
	  cin >> number;
	  nFact1 = factorial(number);
	  nFact2 = factorial(number/2);
	  halfNumber = number / 2;
	  cout << number << "! + " << halfNumber << "! is equal to " << nFact1 + nFact2 << endl << endl;;
	  break;
	}
      case 2:
	{
	  cout << endl << "You choose choice " << choice << "." << endl << endl;
	  do{
	    cout << "Enter a number (2-30): ";
	    cin >> number;
	    if (number < 2 || number > 30)
	      {
		cout << endl << "Invalid integer, please enter an integer between 2 and 30" << endl << endl;
	      }
	  }while(number < 2 || number > 30);
	  cout << "The prime numbers from 2 to 7 are: ";
	  for (int count = 2; count <= number; count++)
	    {
	      isPrime(count);
	    }
	  cout << endl;
	  break;
	}
      case 3:
	{
	  cout << endl << "You choose choice " << choice << "." << endl << endl;
	  cout << "Enter a base integer and a maximum exponent integer: ";
	  cin >> base >> maxExp;
	  total = mixedSum(base, maxExp);
	  cout << "Using base = " << base << " and maxExp = " << maxExp << ", the mixed sum = " << total << endl;
	  break;
	}
      case 4:
	{
	  cout << endl << "You choose to quit the program." << endl << endl;
	  break;
	}
      default:
	{
	  cout << endl << "You choose an invalid choice, please pick another one." << endl << endl;
	  break;
	}
      }
  }while(choice != 4);
  return 0;
}

void menu()
{
  cout << "Math Calculator Menu" << endl;
  cout << "  1.  Factorial" << endl;
  cout << "  2.  Prime" << endl;
  cout << "  3.  Mixed sum" << endl;
  cout << "  4.  Quit" << endl;
  cout << "Enter your choice: ";
}

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
    {
      fact *= i;
    }
  return fact;
}

bool isPrime(int n)
{

  bool prime = true;
  bool result = true;
  bool comma = true;

  for (int i = 2; i < n; i++)
    {
      if (n % i == 0)
	{
	  prime = false;
	  break;
	}
    }
  if(prime)
    {
      if(comma)
	{
	  comma = false;
	}
      else
	{
	  cout << ", ";
	}
      cout << n;
    }
}

double mixedSum(int B,int maxE)
{
  double total;
  for(int count = 1; count <= maxE; count++)
    {
      total += (1/(pow(B, count)));
    }
  return total;
}
