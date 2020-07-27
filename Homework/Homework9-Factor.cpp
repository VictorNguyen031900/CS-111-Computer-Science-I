/*******************************************************************************

Victor Nguyen
CS111
10-25-18

In this program, the user will pick from a menu and the program will read from a
file output the factors of the numbers or determine if the numbers are prime or not

*******************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  bool valid1 = true;
  bool valid2 = true;
  int choice;
  int num;
  int counter1;
  int counter2;

  ifstream infile;
  ofstream outfile;

  do{
    cout << "Factors and Prime Menu" << endl;
    cout << '\t' << "1. Factors of number" << endl;
    cout << '\t' << "2. Check whether number is prime" << endl;
    cout << '\t' << "3. Quit" << endl;
    cout << "Enter you choice: ";
    cin >> choice;

    switch(choice)
      {
      case 1:
	{
	  infile.open("input.txt");
	  outfile.open("output.txt");
	  while(infile >> num)
	    {
	      if (num < 2)
		{
		  outfile << "Invalid integer" << endl;
		}
	      else
		{
		  for (counter1 = 1; counter1 <= num;  counter1++)
		    {
		      if (num % counter1 == 0)
			{
			  outfile << counter1 << " ";
			}
		    }
		  outfile << endl;
		}

	    }
	  cout << endl;
	  counter1 = 0;
	  counter2 = 0;
	  infile.close();
	  outfile.close();
	  valid1 = false;
	  break;
	}
      case 2:
	{
	  infile.open("input.txt");
	  while(infile >> num)
	    {
	      if (num < 2)
		{
		  cout << num << " is an invalid integer, less than 2" << endl;
		}
	      else
		{
		  for (int count = 2; count < num; count++)
		    {
		      if (num % count == 0)
			{
			  counter2++;
			}
		    }
		  if (counter2 < 1)
		    {
		      cout << num << " is a prime number." << endl;
		    }
		  else
		    {
		      cout << num << " is not a prime number." << endl;
		    }
		}
	    }
	  counter1 = 0;
          counter2 = 0;
	  infile.close();
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

  return 0;
}
