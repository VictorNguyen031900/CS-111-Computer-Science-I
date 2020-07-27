/******************************************************************************************

Victor Nguyen
CS111
11-12-18

In this program the user will pick from a menu and the program will either display the elements,
calculate average, max, and min.

******************************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

void menu();

int main()
{
  int choice;
  int integer;
  int max;
  int min;
  double average;
  ifstream infile;
  bool first = true;
  do{
    menu();
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  first = true;
	  infile.open("input.txt");
	  if(!infile)
	    {
	      cout << "No file detected." << endl;
	    }
	  for(int i = 0; i <= 4; i++)
	    {
	      if (first)
		{
		  first = false;
		}
	      else
		{
		  cout << ", ";
		}
		  infile >> integer;
		  cout << integer;
	    }
	  cout << endl;
	  infile.close();
	  break;
	}
      case 2:
	{
	  infile.open("input.txt");
          if(!infile)
            {
              cout << "No file detected." << endl;
            }
	  for(int i = 0; i <= 4; i++)
	    {
	      infile >> integer;
	      average += integer;
	    }
	  average /= 5;
	  cout << "This average is " << average << endl;
	  infile.close();
	  break;
	}
      case 3:
	{
	  infile.open("input.txt");
          if(!infile)
            {
              cout << "No file detected." << endl;
            }
	  infile >> integer;
	  max = integer;
	  for(int i = 0; i <= 4; i++)
	    {
	      infile >> integer;
	      if(max <= integer)
		{
		  max = integer;
		}
	    }
	  cout << "The max is " << max << endl;
	  infile.close();
	  break;
	}
      case 4:
	{
	  infile.open("input.txt");
          if(!infile)
            {
              cout << "No file detected." << endl;
            }
          infile >> integer;
          min = integer;
          for(int i = 0; i <= 4; i++)
            {
              infile >> integer;
              if(min >= integer)
                {
                  min = integer;
                }
            }
          cout << "The min is " << min << endl;
          infile.close();
	  break;
	}
      case 5:
	{
	  cout << "You chose to quit the program" << endl;
	  break;
	}
      default:
	{
	  cout << "Invalid choice" << endl;
	  break;
	}
      }
  }while(choice != 5);
}

void menu()
{
  cout << "Integer Array Menu" << endl;
  cout << "\t1. Display" << endl;
  cout << "\t2. Calculate Average" << endl;
  cout << "\t3. Find Max" << endl;
  cout << "\t4. Find min" << endl;
  cout << "\t5. Quit" << endl;
  cout << "Enter your choice: ";
}
