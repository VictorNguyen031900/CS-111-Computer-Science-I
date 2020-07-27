/*****************************************************************

Victor Nguyen
CS 111
10-23-18

In this program the user will enter the number of departments and
how many staffs members work in each department, then the program
will calculate the avgerage salary of each department.

*****************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int department;
  int staff;
  int salary;
  int total;
  int total2 = 0;
  int counter1;
  int counter2;
  double avgSalary;
  double totalAvSalary;

  cout << "This program averages salaries of each department" << endl;
  cout << "Enter the number of departments in the university: ";
  cin >> department;
  cout << "Enter the number of staff in each department: ";
  cin >> staff;

  for(counter1 = 1; counter1 <= department; counter1++)
    {
      total = 0;
      avgSalary = 0;
      for (counter2 = 1; counter2 <= staff; counter2++)
	{
	  cout << "Enter salary of staff " << counter2 << " in department " << counter1 << ": ";
	  cin >> salary;
	  total += salary;
	}
      total2 += total;
      avgSalary = total / static_cast<double>(staff);
      cout << "The average salary of department " << avgSalary;
      cout << endl;
    }
  totalAvSalary = total2 / (static_cast<double>(department) * staff);
  cout << "The average salary of the university is " << totalAvSalary << endl;
  return 0;
}
