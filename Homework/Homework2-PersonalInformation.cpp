/********************************************************************************

Victor Nguyen
CS111
Homework 2 Question2
9-6-18
This program will gather all information, print, and calculate the student's GPA.

*********************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
  int unit1 = 4, unit2 = 3, unit3 = 3, studentId = 44652346;
  float grade1 = 3.3, grade2 = 2.7, grade3 = 3.0, gpa;
  char f = 74, l = 83;
  string firstName, lastName, streetAddress, city, zipCode, telephoneNumber, collegeMajor, state;

  gpa = ((unit1*grade1)+(unit2*grade2)+(unit3*grade3))/(unit1+unit2+unit3);
  firstName = "John";
  lastName = "Smith";
  streetAddress = "3600 Twin Oaks";
  city = "San Marcos";
  zipCode = "92068";
  telephoneNumber = "76045236845";
  collegeMajor = "Computer Science";
  state = "CA";

  cout << "The name of student is " << firstName << " " << lastName << "." << endl;
  cout << "The address of student is " << streetAddress << ", " << city << ", " << state << ", " << zipCode << "." << endl;
  cout << "The phone number of student is " << telephoneNumber << "." << endl;
  cout << "The major of student is " << collegeMajor << "." << endl;
  cout << "The ID of student is " << studentId << "." << endl;
  cout << "The initial of student is " << f << l << "."<< endl;
  cout << "The GPA of student is " << gpa << "." << endl;

  return 0;
}
