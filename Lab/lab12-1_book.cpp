


/********************************************************************************

Victor Nguyen
CS111
11-13-18

In this program the user will pick from the menu and then the program will read from a 
file and output depending on the choice.

*********************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

void menu();
bool testSoldNumbers(int [], int [], int);

int main()
{
  int choice;
  int integer;
  double num;
  double tax;
  const int SIZE = 10;
  double bookCosts[SIZE];
  double bookSale[SIZE];
  int soldNumbers[SIZE];
  int soldNumbers2[SIZE] = {4, 6, 8, 10, 3, 5, 7, 9, 11,12};
  bool first = true;
  ifstream infile;
  ofstream outfile;
  infile.open("input.txt");
  if(!infile)
    {
      cout << "No file detected." << endl;
    }
  else
    {
      for(int i = 0; i < SIZE; i++)
	{
	  infile >> num;
	  bookCosts[i] = num;
	}
    }
  infile.close();
  do{
    // infile.open("input.txt");
    //if(!infile)
      //{
	//cout << "No file detected." << endl;
	//}
    //else
      //{
	//for(int i = 0; i < SIZE; i++)
	  //{
	    //infile >> num;
	    //bookCosts[i] = num;
	    //}
	//}
    //infile.close();
    menu();
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  first = true;
	  for(int i = 0; i < SIZE; i++)
	    {
	      num = bookCosts[i];
	      if(first)
		{
		  first = false;
		}
	      else
		{
		  cout << ", ";
		}
	      cout << num;
	    }
	  cout << endl;
	  break;
	}
      case 2:
	{
	  outfile.open("output.txt");
	  cout << "Enter tax for book " << ": ";
	  cin >> tax;
	  for(int i = 0; i < SIZE; i++)
	    {
	      bookSale[i] = bookCosts[i] + bookCosts[i] * tax;
	      outfile << bookSale[i] << endl;
	    }
	  outfile.close();
	  break;
	}
      case 3:
	{
	  for(int i = 0; i < SIZE; i++)
	    {
	      num = bookSale[i];
	      cout << "The sale price for book #" << i + 1 << " is " << num << endl;;
	    }
	  break;
	}
      case 4:
	{
	  for(int i = 0; i < SIZE; i++)
	    {
	      cin >> integer;
	      soldNumbers[i] = integer;
	    }
	  break;
	}
      case 5:
	{
	  if(testSoldNumbers(soldNumbers, soldNumbers2, SIZE))
	    {
	      cout << "Arrays are equal." << endl;
	    }
	  else
	    {
	      cout << "Arrays are not equal." << endl;
	    }
	  break;
	}
      case 6:
	{
	  cout << "You chose to quit the program." << endl;
	  break;
	}
      default:
	{
	  cout << "Invalid choice." << endl;
	  break;
	}
      }
  }while(choice != 6);
}

void menu()
{
  cout << "Integer Arrray Menu" << endl;
  cout << "\t1. Display all book costs" << endl;
  cout << "\t2. Compute sale prices" << endl;
  cout << "\t3. Display all sale prices" << endl;
  cout << "\t4. Store number of sold books" << endl;
  cout << "\t5. Compare two arrays" << endl;
  cout << "\t6. Quit" << endl;
  cout << "Enter your choice: ";
}

bool testSoldNumbers(int first [], int second [], int size)
{
  bool result;
  for(int i = 0; i < size; i++)
    {
      if(first[i] == second[i])
	{
	  result = true;
	}
      else
	{
	  result = false;
	  return result;
	}
    }
  return result;
}
