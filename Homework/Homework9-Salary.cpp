/********************************************************************************************************

Victor Nguyen
CS111
10-25-18

In this program, the user will input the number of departments, staff, and salaries so the program
will calculate the avgerage salary of each department to the average of the whole university.

********************************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int totalStaff;
  int totalSalary;
  int department;
  int staff;
  int salary;
  double avgSalary;
  double totalAvgSalary;
  int total;
  int counter1;
  int coutner2;

  cout << "This program averages salaries of each department" << endl;
  cout << "Enter the number of departments in the university: ";
  cin >> department;
  cout << endl;

  for(int counter1 = 1; counter1 <= department; counter1++)
    {
      staff = 0;
      total = 0;
      avgSalary = 0;
      cout << "Enter the number of staff in department " << counter1 << ": ";
      cin >> staff;
      totalStaff += staff;
      for(int counter2 = 1; counter2 <= staff; counter2++)
	{
	  cout << "Enter salary of staff " << counter2 << " in department " << counter1 << ": ";
	  cin >> salary;
	  total += salary;
	}
      totalSalary += total;
      avgSalary = total / static_cast<double>(staff);
      cout << "The average salary of department " << counter1 << " is " << avgSalary;
      cout << endl << endl;
    }
  totalAvgSalary = totalSalary / static_cast<double>(totalStaff);
  cout << "The average salary of the university is " << totalAvgSalary << endl;
  return 0;
}
