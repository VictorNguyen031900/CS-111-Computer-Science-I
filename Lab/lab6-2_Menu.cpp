/************************************************************************************************************************************

Victor Nguyen
CS 111
10-2-18

In this program, the user will pick an option and it will calculate blah blah blah


************************************************************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int choice;
  int hours;
  int salary;
  int temperature;
  cout << "1. Calculate salary" << endl;
  cout << "2. Verify temperature" << endl;
  cout << "3. Quit" << endl;
  cout << "Enter your choice(1-3)" << endl;
  cin >> choice;
  switch(choice)
    {
    case 1: 
      {
	cout << "You selected option 1" << endl;
	cout << "Enter the amount of hours" << endl;
	cin >> hours;
      if (hours > 0 && hours < 80)
	{
	  salary = hours * 12;
	  cout << "Your salary is $" << salary << endl;
	}
      else
	{
	  cout << "The enter number of hours is not valid." << endl;
	}
      }
      break;
    case 2:
      {
	cout << "You selected option 2" << endl;
	cout << "Enter the temperature" << endl;
	cin >> temperature;
	if (temperature >= -50 && temperature <= 150)
	  {
	    if (temperature < 0)
	      {
		cout << "Very cold" << endl;
	      }
	    else if (temperature < 60)
	      {
		cout << "Cold" << endl;
	      }
	    else if (temperature < 100)
	      {
		cout << "Hot" << endl;
	      }
	    else
	      {
		cout << "Very hot" << endl;
	      }
	  }
	else
	  {
	    cout << "The temperature is invalid." << endl;
	  }
      }
      break;
    case 3:
      cout << "You quit the program" << endl;
      break;
    default:
      cout << "Chosen item is invalid" << endl;
    }
  return 0;
}
