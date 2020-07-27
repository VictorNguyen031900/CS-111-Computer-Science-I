/*****************************************************************************

Victor Nguyen
CS111
10-16-18

In this program, the user picks from a menu and it will output the a sequence 
of numbers.

****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  int choice;
  int lower;
  int upper;
  int counter;
  bool valid1;
  bool valid2 = true;
  do{
    cout << "Sequence of numbers Menu" << endl;
    cout << "   1. Odd numbers" << endl;
    cout << "   2. Even numbers" << endl;
    cout << "   3. Multiples of 3" << endl;
    cout << "   4. Multiples of 4" << endl;
    cout << "   5. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
  switch (choice)
    {
    case 1:
      {
	do{
	  cout << "Enter your odd lower bound: ";
	  cin >> lower;
	  cout << "Enter your odd upper bound: ";
	  cin >> upper;
	  if (lower <= upper && lower > 0 && upper > 0 && lower%2!=0)
	    {
	      valid1 = true;
	    }
	  else
	    {
	      if (lower > upper)
		{
		  cout << "Lower bound is greater than Upper bound" << endl;
	      cout << "Error, please enter odd integers" << endl;
	      valid1 = false;
		}
	      else
		{
		  cout << "Errow, please enter odd integers" << endl;
		}
	    }
	}while(valid1 == false);
	for(counter = lower; counter <= upper; counter+=2)
	  {
	    cout << counter << " ";
	  }
	cout << endl;
	valid2 = true;
	break;
      }
    case 2:
      {
	do{
          cout << "Enter your even lower bound: ";
          cin >> lower;
          cout << "Enter your even upper bound: ";
          cin >> upper;
          if (lower <= upper && lower > 0 && upper > 0 && lower%2==0)
            {
              valid1 = true;
            }
          else
            {
              cout << "Error, please enter even integers" << endl;
              valid1 = false;
            }
	}while(valid1 == false);
        for(counter = lower; counter <= upper; counter+=2)
          {
            cout << counter << " ";
          }
        cout << endl;
	valid2 = true;
	break;
      }
    case 3:
      {
	do{
          cout << "Enter your lower bound multiple of 3's: ";
          cin >> lower;
          cout << "Enter your upper bound multiple of 3': ";
          cin >> upper;
          if (lower <= upper && lower > 0 && upper > 0 && lower%3==0)
            {
              valid1 = true;
            }
          else
            {
              cout << "Error, please enter integers that is multiple of 3's" << endl;
              valid1 = false;
            }
        }while(valid1 == false);
        for(counter = lower; counter <= upper; counter+=3)
          {
            cout << counter << " ";
          }
        cout << endl;
	valid2 = true;
	break;
      }
    case 4:
      {
	do{
          cout << "Enter your even lower bound multiple of 4's: ";
          cin >> lower;
          cout << "Enter your even upper bound multiple of 4's: ";
          cin >> upper;
          if (lower <= upper && lower > 0 && upper > 0 && lower%4==0)
            {
              valid1 = true;
            }
          else
            {
              cout << "Error, please enter integers that is multiples of 4's" << endl;
              valid1 = false;
            }
        }while(valid1 == false);
        for(counter = lower; counter <= upper; counter+=4)
          {
            cout << counter << " ";
          }
        cout << endl;
	valid2 = true;
	break;
      }
    case 5:
      {
	cout << "You quit the program" << endl;
	valid2 = true;
	break;
      }
    default:
      {
	cout << "Invalid choice pick again" << endl;
	valid2 = false;
	break;
      }
    }
  }while (valid2 == false);
  return 0;
}
