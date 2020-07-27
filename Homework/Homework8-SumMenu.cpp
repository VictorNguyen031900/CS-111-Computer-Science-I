/********************************************************************************************************************************

Victor Nguyen
CS 111
10-22-18

In this program the user will pick from the menu and the program will calculate the summ depending on the option chosen by the user

********************************************************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int choice;
  int lower;
  int upper;
  int counter;
  double total;
  bool valid1;
  bool valid2 = true;
  do{
    cout << "Sum of numbers Menu" << endl;
    cout << "   1. Sum of odd numbers" << endl;
    cout << "   2. Sum of even numbers" << endl;
    cout << "   3. Sum of multiples of 3 to the power of 5" << endl;
    cout << "   4. Sum of one over multiples of 4" << endl;
    cout << "   5. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    total = 0;
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
		    cout << "Error, please enter postive odd integers" << endl;
		  }
	      }
	  }while(valid1 == false);
	  cout << "The sequence is: ";
	  for(counter = lower; counter <= upper; counter+=2)
	    {
	      cout << counter << " ";
	      total += counter;
	    }
	  cout << endl << "The total is " << total << endl;
	  cout << endl;
	  valid2 = false;
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
		if (lower > upper)
		  {
		    cout << "Lower bound is greather than Upper bound" << endl;
		    cout << "Error, please enter even integers" << endl;
		    valid1 = false;
		  }
		else
		  {
		    cout << "Error, please enter postive even integers" << endl;
		  }
	      }
	  }while(valid1 == false);
	  cout << "The sequence is: ";
	  for(counter = lower; counter <= upper; counter+=2)
	    {
	      cout << counter << " ";
	      total += counter;
	    }
	  cout << endl << "The total is " << total << endl;
	  cout << endl;
	  valid2 = false;
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
		if (lower > upper)
		  {
		    cout << "Lower bound is greater than Upper bound" << endl;
		    cout << "Error, please enter integers that is multiple of 3's" << endl;
		  }
		else
		  {
		    cout << "Error, please enter postive integers that is multiples of 3's" << endl;
		    valid1 = false;
		  }
	      }
	  }while(valid1 == false);
	  for(counter = lower; counter <= upper; counter+=3)
	    {
	      cout << counter << "^5 ";
	      total += pow(counter, 5);
	    }
	  cout << endl << "The total is " << total << endl;
	  cout << endl;
	  valid2 = false;
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
		if (lower > upper)
		  {
		    cout << "Lower bound is greater than Upper bound" << endl;
		    cout << "Error, please enter postive integers that is multiples of 4's" << endl;
		    valid1 = false;
		  }
		else
		  {
		    cout << "Error, please enter positive intgers that is multiples of 4's" << endl;
		  }
	      }
	  }while(valid1 == false);
	  cout << "The sequence is: ";
	  for(counter = lower; counter <= upper; counter+=4)
	    {
	      cout << "1/" << counter << " ";
	      total = 1 / static_cast<double>(counter);
	    }
	  cout << endl << "The total is " << total << endl;
	  cout << endl;
	  valid2 = false;
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
