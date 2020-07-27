/*********************************************************************

Victor Nguyen
CS111
11-6-18

In this program, the user wil pick from a menu and the program will output
depending on the choice of the user.  The program wil output integers, 
real numbers.

*********************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

bool isEqual (int, int);
bool isEqual (float, float);
void menu();

int main()
{
  int choice;
  int num1;
  int num2;
  float realNum1;
  float realNum2;
  do{
    menu();
    cin >> choice;
    switch (choice)
      {
      case 1:
	{
	  cout << "Enter two integers: ";
	  cin >> num1 >> num2;
	  if (isEqual(num1, num2))
	    {
	      cout << "The two inegers are equal." << endl;
	    }
	  else
	    {
	      cout << "The two integers are not equal." << endl;
	    }
	  break;
	}
      case 2:
	{
	  cout << "Enter two real numbers: ";
	  cin >> realNum1 >> realNum2;
	  if(isEqual(realNum1, realNum2))
	    {
	      cout << "The two real numbers are equal." << endl;
	    }
	  else
	    {
	      cout << "The two real numbers are not equal." << endl;
	    }
	  break;
	}
      case 3:
	{
	  cout << "You quit the program" << endl;
	  break;
	}
      default:
	{
	  cout << "Invalid choice, pick another choice (1-3)" << endl;
	  break;
	}
      }
  }while(choice != 3);
}

void menu()
{
  cout << "Comparison Menu" << endl;
  cout << "  1. Integers" << endl;
  cout << "  2. Real Numbers" << endl;
  cout << "  3. Quit" << endl;
  cout << "Enter your choice: ";
}

bool isEqual(int num1, int num2)
{
  if (num1 == num2)
    {
      return true;
    }
  else
    {
      return false;
    }
}

bool isEqual(float num1, float num2)
{
  float compare;
  compare = num1 - num2;
  if (abs(compare)<0.2)
    {
      return true;
    }
  else
    {
      return false;
    }
}
