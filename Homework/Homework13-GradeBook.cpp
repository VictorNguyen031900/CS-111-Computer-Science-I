/***************************************************************************************************

Victor Nguyen
CS111
11-25-18

In this program, it will read from a file and display the total, average, highest, lowest, and above average

**************************************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

double getAverage(double[]);
int getHighest(double[]);
int getLowest(double[]);
void PrintAboveAverage(string[], string[], double[], char[], double);

int main()
{
  const int SIZE = 15;
  ifstream infile;
  string firstName[SIZE];
  string lastName[SIZE];
  int HW[SIZE];
  int quiz[SIZE];
  int lab[SIZE];
  int midterm[SIZE];
  int final[SIZE];
  double total[SIZE];
  char symGrade[SIZE];
  int index;
  double avg;
  infile.open("gradebook.txt");
  if(!infile)
    {
      cout << "Error opening 'gradebook.txt'" << endl;
    }
  else
    {
      for(int i = 0; i < SIZE; i++)
	{
	  infile >> firstName[i] >> lastName[i] >> HW[i] >> quiz[i] >> lab[i] >> midterm[i] >> final[i];
	  total[i] = (HW[i] * 0.2) + (quiz[i] * 0.1) + (lab[i] * 0.1) + (midterm[i] * 0.3) + (final[i] * 0.3);
	  if(total[i] >= 90 && total[i] <= 100)
	    {
	      symGrade[i] = 'A';
	    }
	  else if(total[i] >= 80 && total[i] <= 89)
	    {
	      symGrade[i] = 'B';
	    }
	  else if(total[i] >= 70 && total[i] <= 79)
	    {
	      symGrade[i] = 'C';
	    }
	  else if(total[i] >= 60 && total[i] <= 69)
	    {
	      symGrade[i] = 'D';
	    }
	  else
	    {
	      symGrade[i] = 'F';
	    }
	}
    }
  infile.close();
  avg = getAverage(total);
  cout << "The average total grade in the class is " << avg << endl;
  index = getHighest(total);
  cout << "Highest student: " << firstName[index] << " " << lastName[index] << " " << total[index] << " " << symGrade[index] << endl;
  index = getLowest(total);
  cout << "Lowest student: " << firstName[index] << " " << lastName[index] << " " << total[index] << " " << symGrade[index] << endl;
  PrintAboveAverage(firstName, lastName, total, symGrade, avg);
  return 0;
}

double getAverage(double total[])
{
  double avg = 0;
  double totalGrades = 0;
  for(int i = 0; i < 15; i++)
    {
      totalGrades += total[i];
    }
  avg = totalGrades / 15;
  return avg;
}

int getHighest(double total[])
{
  double max = total[0];
  int index;
  for(int i = 0; i < 15; i++)
    {
      if(total[i] > max)
	{
	  max = total[i];
	  index = i;
	}
    }
  return index;
}

int getLowest(double total[])
{
  double low = total[0];
  int index;
  for(int i = 0; i < 15; i++)
    {
      if(total[i] < low)
	{
	  low = total[i];
	  index = i;
	}
    }
  return index;
}

void PrintAboveAverage(string firstName[], string lastName[], double total[], char symGrade[], double avg)
{
  ofstream outfile;
  outfile.open("above.txt");
  for(int i = 0; i < 15; i++)
    {
      if(total[i] >= avg)
	{
	  outfile << firstName[i] << " " << lastName[i] << " " << total[i] << " " << symGrade[i] << endl;
	}
    } 
  outfile.close();
  cout << "Successfully wrote to 'above.txt'" << endl;
}
