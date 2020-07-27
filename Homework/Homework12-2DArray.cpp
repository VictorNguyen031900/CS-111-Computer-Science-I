/*************************************************************************************************************

Victor Nguyen
CS111
11-19-18

In this program it will demonstrate reading an array from an input file and output depending on instructions

**************************************************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int COLS = 4;
void showArray(int [][COLS], int);
void totalArray(int [][COLS], int);
void rowAverage(int [][COLS], int);
void colAverage(int [][COLS], int);
void rowHighest(int [][COLS], int);

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
  rowAverage(numbers, ROWS);
  colAverage(numbers, ROWS);
  rowHighest(numbers, ROWS);
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
  cout << endl;
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < COLS; j++)
        {
          total += numbers[i][j];
        }
    }
  cout << "The total is " << total << endl;
}

void rowAverage(int numbers[][COLS], int rows)
{
  double total;
  double average;
  cout << endl;
  for(int i = 0; i < rows; i++)
    {
      total = 0;
      for(int j = 0; j < COLS; j++)
	{
	  total += numbers[i][j];
	}
      average = total / COLS;
      cout << "Average for row #" << i + 1 << " is " << average << endl;
    }
}

void colAverage(int numbers[][COLS], int rows)
{
  double total;
  double average;
  cout << endl;
  for(int i = 0; i < COLS; i++)
    {
      total = 0;
      for(int j = 0; j < rows; j++)
	{
	  total += numbers[j][i];
	}
      average = total / rows;
      cout << "Average for column #" << setprecision(2) << fixed << i + 1 << " is " << average << endl;
    }
}

void rowHighest(int numbers[][COLS], int rows)
{
  int max;
  cout << endl;
  for(int i = 0; i < rows; i++)
    {
      max = numbers[i][0];
      for (int j = 0; j < COLS; j++)
	{
	  if (max < numbers[i][j])
	    {
	      max = numbers[i][j];
	    }
	}
      cout << "The highest in row #" << i + 1 << " is " << max << endl;
    }
}
