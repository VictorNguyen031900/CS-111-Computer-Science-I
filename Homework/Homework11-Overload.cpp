/********************************************************************************************

Victor Nguyen
CS111
11-8-18

In this program, the user will pick from the mirror and the program will either output if two
integers are equal or not, if two real numbers are equal or not, or if two complex numbers
aer equal or not.

********************************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

bool isEqual (int, int);
bool isEqual (float, float);
bool isEqual (float, float, float, float);
void menu();

int main()
{
  int choice;
  int intNum1;
  int intNum2;
  float realNum1;
  float realNum2;
  float realPart1;
  float imgPart1;
  float realPart2;
  float imgPart2;
  do{
  menu();
  cin >> choice;
  switch(choice)
    {
    case 1:
      {
	cout << "Enter two integers: ";
	cin >> intNum1 >> intNum2;
	if(isEqual(intNum1, intNum2))
	  {
	    cout << "The two integers are equal." << endl;
	  }
	else
	  {
	    cout << "The two intgers are not equal." << endl;
	  }
	break;
      }
    case 2:
      {
	cout << "Enter two real number: ";
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
	cout << "Enter two complex numbers (4 real numbers total): ";
	cin >> realPart1 >> imgPart1 >> realPart2 >> imgPart2;
	if(isEqual(realPart1, imgPart2, realPart2, imgPart2))
	  {
	    cout << "The two complex numbers are equal." << endl;
	  }
	else
	  {
	    cout << "The two complex numbers are not equal." << endl;
	  }
	break;
      }
    case 4:
      {
	cout << "You choose to quit the program." << endl;
	break;
      }
    default:
      {
	cout << "Invalid choice." << endl;
	break;
      }
    }
  }while(choice != 4);
}

bool isEqual(int num1, int num2)
{
  if (num1 < num2 || num1 > num2)
    {
      return false;
    }
  else
    {
      return true;
    }
}

bool isEqual(float num1, float num2)
{
  if (abs(num1 - num2) < 0.2)
    {
      return true;
    }
  else
    {
      return false;
    }
}

bool isEqual(float real1, float image1, float real2, float image2)
{
  if (abs(real1 - real2) < 0.2 && abs(image1 - image2) < 0.2)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void menu()
{
  cout << "Comparison Menu" << endl;
  cout << "  1. Integers" << endl;
  cout << "  2. Real Numbers" << endl;
  cout << "  3. Complex Numbers" << endl;
  cout << "  4. Quit" << endl;
  cout << "Enter your choice: ";
}
