/***********************************************************************************

Victor Nguyen
CS111
10-23-18

In this program, the user will pick from a menu and the program will output a pattern
based on choice the user has picked.

************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int choice;
  int rows;
  int counter;
  int counter2;
  do{
    cout << "Pattern menu" << endl;
    cout << '\t' << "1. Pattern1" << endl;
    cout << '\t' << "2. Pattern2" << endl;
    cout << '\t' << "3. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  counter = 0;
	  counter2 = 0;
	  do{
	    cout << "Enter an integer: ";
	    cin >> rows;
	    if(rows < 1 || rows >9)
	      {
		cout << "Integer entered is out of bounds, please only integers 1 - 9" << endl;
	      }
	  }while(rows < 1 || rows > 9);
	  for(counter = 1; counter <= rows; counter++)
	    {
	      for(counter2 = 1; counter2 <= rows;counter2++)
		{
		  cout << counter2;
		}
	      cout << endl;
	    }
	  break;
	}
      case 2:
	{
	  counter = 0;
	  counter2 = 0;
	  do{
	    cout << "Etner an integer: ";
	    cin >> rows;
	    if(rows < 1 || rows >9)
              {
                cout << "Integer entered is out of bounds, please only integers 1 - 9" << endl;
              }
	  }while(rows < 1 || rows > 9);
	  for(counter = 1; counter <= rows; counter++)
            {
              for(counter2 = 1; counter2 <= counter;counter2++)
                {
                  cout << counter2;
                }
              cout << endl;
            }
	  break;
	}
      case 3:
	{
	  cout << "You quit the program." << endl;
	  break;
	}
      default:
	{
	  cout << "Invalid input, choose another one." << endl;
	  break;
	}
      }
  }while(choice != 3);
  return 0;
}
