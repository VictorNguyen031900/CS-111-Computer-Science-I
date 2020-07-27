/*************************************************************************************************

Victor Nguyen
CS111
10-15-18

In thie program, the user will enter 10 positive integers and it will output the largest integer
of the ten entered.

************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  int enter;
  int largest;
  for (int counter = 1; counter <= 10; counter++)
    {
      do{
	cout << "Please enter a POSITIVE integer number " << counter << ". ";
	cin >> enter;
	if(enter <0)
	  {
	    cout << "Invalid integer." << endl;
	  }
      }while(enter < 0);
      if (enter >= largest)
	{
	  largest = enter;
	}
    }
  cout << "The largest integer of the 10 entered is: " << largest << endl;
  return 0;
}
