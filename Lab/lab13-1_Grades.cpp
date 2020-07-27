/*************************************************************************************************************

Victor Nguyen
CS111
11-19-18

The program will read from an input file and output the students whose grade is higher than the average into
a file.

**************************************************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

void higherThanAvg(string[], double[], int);

int main()
{
  const int SIZE = 5;
  string names[SIZE];
  double grades[SIZE];
  ifstream infile;
  infile.open("input.txt");
  if(!infile)
    {
      cout << "Error opening 'input.txt'" << endl;
    }
  else
    {
      for(int i = 0; i < SIZE; i++)
	{
	  infile >> names[i] >> grades[i];
	}
      higherThanAvg(names, grades, SIZE);
    }
  infile.close();
}

void higherThanAvg(string names[], double grades[], int size)
{
  ofstream outfile;
  double average;
  double total = 0;
  string name;
  double grade;
  outfile.open("output.txt");
  for(int i = 0; i < size; i++)
    {
      total += grades[i];
    }
  average = total / size;
  for(int j = 0; j < size; j++)
    {
      if(grades[j] > average)
	{
	  name = names[j];
	  grade = grades[j];
	  outfile << name << " " << grade << endl;
	}
    }
  outfile.close();
  cout << "Successfully written to 'output.txt'" << endl;
}
