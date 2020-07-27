/***************************************************************************

Victor Nguyen
CS111
10-23-18

In thie program the user will pick from a menu and the program will do something
depending on the chosen item.

***************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  bool valid1 = true;
  bool valid2 = true;
  int choice;
  int num;
  int counter;
  int count1;

  do{
    cout << "Factors and Prime Menu" << endl;
    cout << '\t' << "1. Factors of number" << endl;
    cout << '\t' << "2. Check whether number is price" << endl;
    cout << '\t' << "3. Quit" << endl;
    cout << "Enter you choice: ";
    cin >> choice;

    switch(choice)
      {
      case 1:
	{
	  do{
	  cout << "Enter a number: ";
	  cin >> num;
	  if (num < 0)
	    {
	      cout << "Negative integer enter, only positive integers" << endl;
	    }
	  }while (num < 0);
	  cout << "Foctors of " << num << " are: ";
	  for (counter = 1; counter <= num;  counter++)
	    {
	      if (num % counter == 0)
		{
		  cout << counter << " ";
		}
	    }
	  cout << endl << endl;
	  counter = 0;
	  count1 = 0;
	  num = 0;
	  valid1 = false;
	  break;
	}
      case 2:
	{
	  cout << "Enter a prime nummber: ";
	  cin >> num;
	  for (int count = 2; count < num; count++)
	    {
	      if (num % count == 0)
		{
		  count1++;
		}
	    }
	  if (count1 < 1)
	    {
	      cout << num << " is a prime number." << endl;
	    }
	  else
	    {
	      cout << num << " is not a prime number." << endl;
	    }
	  counter = 0;
          count1 = 0;
          num = 0;
	  valid1 = false;
	  break;
	}
      case 3:
	{
	  cout << "You quit the program" << endl;
	  valid1 = true;
	  break;
	}
      default:
	{
	  cout << "Invalid choice, oick another one" << endl;
	  valid1 = false;
	  break;
	}
      }
  }while(valid1 == false);

}
