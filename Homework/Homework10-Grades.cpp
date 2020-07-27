/******************************************************************************************************************

Victor Nguyen
CS111
11-1-18

In this program, the program will read from an input file and calculate the average of total grades for the
entire class and print out the student with the highest total grade.

*******************************************************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  string firstName;
  string lastName;
  int midterm;
  int final;
  double totalGrade;
  double avgTGrade;
  int count;
  double largestGrade = 0;
  string largeFName;
  string largeLName;

  ifstream infile;
  ofstream outfile;
  infile.open("input.txt");
  outfile.open("output.txt");

  if (infile)
    {
      cout << "Opened successfully" << endl;
      while(infile >> firstName >> lastName >> midterm >> final)
	{
	  totalGrade = 0;
	  totalGrade = (midterm * 0.4) + (final * 0.6);
	  avgTGrade += totalGrade;
	  outfile << firstName << " " << lastName << " " << midterm << " " << final << " " << totalGrade << endl;
	  count++;
	  if (totalGrade >= largestGrade)
	    {
	      largestGrade = totalGrade;
	      largeFName = firstName;
	      largeLName = lastName;
	    }
	}
      avgTGrade /= count;
      outfile << endl << endl << "The average of total grade is " << fixed << setprecision(2) << avgTGrade << endl;
      outfile << "The highest total grade is " << largestGrade << " by " << largeFName << " " << largeLName;

    }
  else
    {
      cout << "Unsuccessfully opened" << endl;
    }

  infile.close();
  outfile.close();
  return 0;
}
