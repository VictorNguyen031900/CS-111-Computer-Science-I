/**************************************************************************************

Victor Nguyen
CS111
11-14-18
In this program the program will read from an input file and copy the contains in to
a 2D array and output this array.

*************************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int COLS = 4;
void showArray(int [][COLS], int);
void totalArray(int [][COLS], int);

int main()
{
  int nums;
  const int ROWS = 12;
  int numbers[ROWS][COLS];
  ifstream infile;
  infile.open("2Dnumbers.txt");

  if(infile)
    {
      for(int i = 0; i < ROWS; i++)
	{
	  for(int j = 0; j < COLS; j++)
	    {
	      infile >> nums;
	      numbers[i][j] = nums;
	    }
	}
      infile.close();
    }
  else
    {
      cout << "Error opening file." << endl;
    }

  showArray(numbers, ROWS);
  totalArray(numbers, ROWS);
  return 0;
}

void showArray(int numbers[][COLS], int rows)
{
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < COLS; j++)
	{
	  cout << setw(4) << numbers[i][j] << " ";
	}
      cout << endl;
    }
}

void totalArray(int numbers[][COLS], int rows)
{
  int total;
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < COLS; j++)
        {
          total += numbers[i][j];
        }
    }
  cout << "The total is " << total << endl;
}
