/***********************************************************************************************

Victor Nguyen
CS111
11-6-18

In this program, the user will pick from a menu and the program will output depending on the 
choice of the user.

***********************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void menu();

int main()
{
  int choice;
  int total;
  int max;
  int numbers[5] = {5, 9, 6, 1, 8};
  bool comma = true;
  do{
    menu();
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  for(int count = 0; count <= 4; count++)
	    {
	      if(comma)
		{
		  comma = false;
		}
	      else
		{
		  cout << ", ";
		}
	      cout << numbers[count];
	    }
	  cout << endl << endl;
	  break;
	}
      case 2:
	{
	  for(int count = 0; count <= 4; count++)
	    {
	      total += numbers[count];
	    }
	  cout << total << endl << endl;
	  break;
	}
      case 3:
	{
	  max = numbers[0];
	  for(int count = 1; count <= 4; count++)
	    {
	      if(numbers[count] > max)
		{
		  max = numbers[count];
		}
	    }
	  cout << "The max is " << max << endl << endl;
	  break;
	}
      case 4:
	{
	  cout << "You quit the program." << endl << endl;
	  break;
	}
      default:
	{
	  cout << "Invalid integer, pick another one (1-4)" << endl << endl;
	  break;
	}
      }
  }while(choice != 4);
}

void menu()
{
  cout << "Integer Array Menu" << endl;
  cout << "\t1. Display all elements" << endl;
  cout << "\t2. Calculate total" << endl;
  cout << "\t3. Find max" << endl;
  cout << "\t4. Quit" << endl;
  cout << "Enter your choice: ";
}
