/**********************************************

Victor Nguyen
CS 111
9-11-18

This program, you write an expression that use PI and radius to calculate
the area anf circumference and store the calculated values in two varibles.

 **********************************************/

#include <iostream>
using namespace std;

int main()
{
  const float PI = 3.14;
  const float RADIUS = 5.4;
  float  area, circumference;
  area = PI * RADIUS * RADIUS;
  circumference = 2 * PI * RADIUS;
  cout << "The circumference of the circle is " << circumference << endl;
  cout << "The area of the circle is " << area << endl;
  return 0;

}
