/*******************************************************

Victor Nguyen
CS111
10/10/18

In this program, the user will pick from a menu and it will calculate the area of a shape

********************************************************/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
  int choice;
  double area;
  double radius;
  double length;
  double width;
  double base;
  double height;
  const double PI = 3.14159265359;
  cout << "Geometry Calculator" << endl;
  cout << "1. Calculate the Area of a Circle" << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle" << endl;
  cout << "4. Quit" << endl;
  cout << "Enter your choice (1-4):";
  cin >> choice;
  switch (choice)
    {
    case 1:
      cout << "Enter the radius of the circle." << endl;
      cin >> radius;
      area = PI * pow(radius,2);
      cout << "The area of the circle is " << area << endl;
      break;
    case 2:
      cout << "Enter the length of the rectangle." << endl;
      cin >> length;
      cout << "Enter the width of the rectangle." << endl;
      cin >> width;
      area = length * width;
      cout << "The area of the rectangle is " << area << endl;
      if (area < 100 || area > 10000)
	{
	  cout << "The field size is not in the range." << endl;
	}
      else if (area < 162)
	{
	  cout << "Smaller than a  volleyball field." << endl;
	}
      else if (area < 436)
	{
	  cout << "Smaller than a basketball field." << endl;
	}
      else if (area < 6400)
	{
	  cout << "Smaller than a soccer field." << endl;
	}
      else
	{
	  cout << "A large field" << endl;
	}
      break;
    case 3:
      cout << "Enter the base length of the triangle." << endl;
      cin >> base;
      cout << "Enter the height of the triangle." << endl;
      cin >> height;
      area = base * (height * 0.5);
      cout << "The area of the triangle is " << area << endl;
      break;
    case 4:
      cout << "You quit the program." << endl;
      break;
    default:
      cout << "Invalid item chosen." << endl;
      break;
    }
  return 0;
}
