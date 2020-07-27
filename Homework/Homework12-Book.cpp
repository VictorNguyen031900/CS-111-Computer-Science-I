/********************************************************************************

Victor Nguyen
CS111
11-15-18

In this program the user will pick from the menu and then the program will read from a 
file and output depending on the choice.

*********************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

void menu();
bool testSoldNumbers(int [], int [], int);
double showValue(double [], int);
void showValues(int [], int);
double getTotal(double [], int);
int getLowest(int [], int);
double getLowest(double [], int);
int getLowestIndex(double [], int);
double getHighest(int &, double [], int);

int main()
{
  double num;
  double tax;
  int choice;
  int num1;
  int refvar = 0;
  const int SIZE = 10;
  ifstream infile;
  ofstream outfile;
  double bookCosts[SIZE];
  double bookSale[SIZE];
  int soldNumbers[SIZE];
  int soldNumbers2[SIZE] = {4, 6, 8, 10, 3, 5, 7, 9, 11, 12};
  double totalSales[SIZE];
  infile.open("input.txt");
  if(!infile)
    {
      cout << "No input file detected" << endl;
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
    menu();
    cin >> choice;
    switch(choice)
      {
      case 1:
	{
	  for(int i = 0; i < SIZE; i++)
	    {
	      cout << bookCosts[i] << " ";
	    }
	  cout << endl;
	  break;
	}
      case 2:
	{
	  cout << "Enter the amount of tax: ";
	  cin >> tax;
	  outfile.open("output.txt");
	  for(int i = 0; i < SIZE; i++)
	    {
	      bookSale[i] = bookCosts[i] + (bookCosts[i] * tax);
	      outfile << bookSale[i] << endl;
	    }
	  outfile.close();
	  cout << "Done. Check output.txt" << endl;
	  break;
	}
      case 3:
	{
	  outfile.open("output.txt");
	  for(int i = 0; i < SIZE; i++)
	    {
	      cout << "The sale price for book #" << i + 1 << " is " << bookSale[i] << endl;
	    }
	  outfile.close();
	  break;
	}
      case 4:
	{
	  for(int i = 0; i < SIZE; i++)
	    {
	      cout << "Enter the amount for sold for Book #" << i + 1 << ": ";
	      cin >> num1;
	      soldNumbers[i] = num1;
	    }
	  cout << "Array soldNumbers set." << endl;
	  break;
	}
      case 5:
	{
	  if (testSoldNumbers(soldNumbers, soldNumbers2, SIZE))
	    {
	      cout << "The two arrays are equal." << endl;
	    }
	  else
	    {
	      cout << "The two arrays are not equal." << endl;
	    }
	  break;
	}
      case 6:
	{
	  for(int i = 0; i < SIZE; i++)
	    {
	      totalSales[i] = bookSale[i] * soldNumbers[i];
	    }
	  for(int j = 0; j < SIZE; j++)
	    {
	      cout << "The total price for book #" << j+1 << " is " << showValue(totalSales, j) << endl;;
	    }
	  showValues(soldNumbers, SIZE);
	  break;
	}
      case 7:
	{
	  cout << "The amount of total sale is $" << getTotal(totalSales, SIZE) << endl;
	  cout << "The lowest number of sold books is " << getLowest(soldNumbers, SIZE) << endl;
	  cout << "The lowest book cost is $" << getLowest(bookCosts,SIZE)<< endl;
	  cout << "The lowest vost belongs to book #" << getLowestIndex(bookCosts, SIZE) << endl;
	  break;
	}
      case 8:
	{
	  getHighest(refvar, bookCosts, SIZE);
	  cout << "The highest book cost is $" << getHighest(refvar, bookCosts, SIZE) << " belonged to book index #" << refvar << endl;
	  break;
	}
      case 9:
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
  }while(choice != 9);
}

void menu()
{
  cout << "Integer Array Menu" << endl;
  cout << "  1. Display all book costs" << endl;
  cout << "  2. Compute sale prices" << endl;
  cout << "  3. Display all sale prices" << endl;
  cout << "  4. Store number of sold books" << endl;
  cout << "  5. Compare two arrays" << endl;
  cout << "  6. Calculate total sales and display" << endl;
  cout << "  7. Find total and min" << endl;
  cout << "  8. Find Max" << endl;
  cout << "  9. Quit" << endl;
  cout << "Enter your choice: ";
}

bool testSoldNumbers(int one[], int two[], int size)
{
  bool result;
  for(int i = 0; i < size; i++)
    {
      if (one[i] == two[i])
	{
	  result = true;
	}
      else
	{
	  result = false;
	}
    }
  return result;
}

double showValue(double done[], int num)
{
  return done[num];
}

void showValues(int one[], int size)
{
  for(int i = 0; i < size; i++)
    {
      cout << "The number of sold books for book #" << i+1 << " is " << one[i] << endl;
    }
}

double getTotal(double done[], int size)
{
  double total = 0;
  for(int i = 0; i < size; i++)
    {
      total += done[i];
    }
  return total;
}

int getLowest(int ione[], int size)
{
  int lowest;
  lowest = ione[0];
  for(int i = 0; i < size; i++)
    {
      if(lowest > ione[i])
      {
	lowest = ione[i];
      }
    }
  return lowest;
}

double getLowest(double ione[], int size)
{
  double lowest;
  lowest = ione[0];
  for(int i = 0; i < size; i++)
    {
      if(lowest > ione[i])
	{
	  lowest = ione[i];
	}
    }
  return lowest;
}

int getLowestIndex(double cost [], int size)
{
  double lowestCosts = cost[0];
  int lowestIndex = 0;
  for(int i = 0; i < size; i++)
    {
      if(lowestCosts > cost[i])
	{
	  lowestCosts = cost[i];
	  lowestIndex = i + 1;
	}
    }
  return lowestIndex;
}

double getHighest(int &refindex, double bookCosts[], int size)
{
  double costs = bookCosts[0];
  for(int i = 0; i < size; i++)
    {
      if(costs < bookCosts[i])
	{
	  costs = bookCosts[i];
	  refindex = i + 1;
	}
    }
  return costs;
}
