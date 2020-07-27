/*****************************************************************************************************

Victor Nguyen
CS111
10-15-18

In this program, the user will pick from a menu and it will ask the user to enter the answer to a
question the relates to the option the user picked.

*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int integer1;
  int integer2;
  int integer3;
  int choice;
  int total;
  int input;
  bool out;
  do{
    integer1 = rand() % 100;
    integer2 = rand() % 100;
    integer3 = rand() % 100;
    cout << "Math Tutor Menu" << endl;
    cout << "------------------------------" << endl;
    cout << "1. Addition problem" << endl;
    cout << "2. Subtraction problem" << endl;
    cout << "3. Multiplication problem" << endl;
    cout << "4. Quit this program" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  total = integer1 + integer2 + integer3;
	  cout << " " << integer1 << endl;
	  cout << " " << integer2 << endl;
	  cout << "+" << integer3 << endl;
	  cout << "____" << endl;
	  cin >> input;
	  if (input != total)
	    {
	      cout << "Incorrect, the answer is " << total << endl;
	    }
	  else
	    {
	      cout << "Correct!" << endl;
	    }
	  break;
	}
      case 2:
	{
	  total = integer1 - integer2 - integer3;
          cout << " " << integer1 << endl;
          cout << " " << integer2 << endl;
          cout << "-" << integer3 << endl;
          cout << "____" << endl;
          cin >> input;
          if (input != total)
            {
              cout << "Incorrect, the answer is " << total << endl;
            }
          else
            {
              cout << "Correct!" << endl;
            }
          break;
	}
      case 3:
	{
	  total = integer1 * integer2 * integer3;
          cout << " " << integer1 << endl;
          cout << " " << integer2 << endl;
          cout << "*" << integer3 << endl;
          cout << "____" << endl;
          cin >> input;
          if (input != total)
            {
              cout << "Incorrect, the answer is " << total << endl;
            }
          else
            {
              cout << "Correct!" << endl;
            }
          break;

	}
      case 4:
	{
	  cout << "You chose to quit the program" << endl;
	  out = true;
	  break;
	}
      default:
	{
	  cout << "INVALID CHOICE PICK ANOTHER ONE" << endl;
	  break;
	}
      }
  }while (out == false);
  return 0;
}
