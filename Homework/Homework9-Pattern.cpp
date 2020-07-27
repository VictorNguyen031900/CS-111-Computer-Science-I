/**********************************************************************

Victor Nguyen
CS111
10-26-18

In this program the user will pick from the menu and the program will
read from a file and output a pattern based on the choice chosen in the
the menu.

**********************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int choice;
  int rows;
  int counter;
  int counter2;
  int counter3;
  int counter4;
  do{
    cout << "Pattern menu" << endl;
    cout << '\t' << "1. Pattern1" << endl;
    cout << '\t' << "2. Pattern2" << endl;
    cout << '\t' << "3. Pattern3" << endl;
    cout << '\t' << "4. Pattern4" << endl;
    cout << '\t' << "5. Quit" << endl;
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
	    cout << "Enter an integer: ";
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
	  for(counter = rows; counter >= 1; counter--)
	    {
	      for(counter2 = 1; counter2 <= counter; counter2++)
		{
		  cout << "*";
		}
	      cout << endl;
	    }
	  break;
	}
      case 4:
	{
	  counter = 0;
	  counter2 = 0;
	  counter3 = 0;
	  counter4 = 0;
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
              for(counter2 = 1; counter2 <= counter;counter2++)
                {
                  cout << counter2;
		}
	      for(counter3 = rows; counter3 >= (counter2 - 1); counter3--)
		    {
		      cout << "*";
		    }
              cout << endl;
            }
	  break;
	}
      case 5:
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
  }while(choice != 5);
  return 0;
}
