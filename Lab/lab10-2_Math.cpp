/***********************************************************************

Victor Nguyen
CS111
10-31-18

In this program the user will pick from a menu and the program will output
according the choice picked, this program use functions

************************************************************************/

#include <iostream>

using namespace std;

void menu();
int factorial(int);
bool isPrime(int);

int main()
{
  int choice;
  int number;
  int nFact;
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
	  nFact = factorial(number);
	  cout << number << "! is equal to  " << nFact << endl << endl;;
	  break;
	}
      case 2:
	{
	  cout << endl << "You choose choice " << choice << "." << endl << endl;
	  cout << "Enter a number: ";
	  cin >> number;
	  if(isPrime(number) == true)
	    {
	      cout << endl << number << " is a prime number." << endl;
	    }
	  else
	    {
	      cout << endl << number << " is not a prime number." << endl;
	    }
	  break;
	}
      case 3:
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
  }while(choice != 3);
  return 0;
}

void menu()
{
    cout << "Math Calculator Menu" << endl;
    cout << "  1.  Factorial" << endl;
    cout << "  2.  Prime" << endl;
    cout << "  3.  Quit" << endl;
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
  int count;
  int i;
  if (n < 2 )
    {
      return false;
    }
  else
    {
      for (i = 2; i <= n; i++)
	{
	  if (n % i == 0)
	    {
	      count++;
	    }
	}
    }
  if (count > 1)
    {
    return false;
    }
  else
    {
    return true;
    }
}
