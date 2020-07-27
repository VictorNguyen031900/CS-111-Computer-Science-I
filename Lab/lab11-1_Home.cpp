/*******************************************************************************************************************

Victor Nguyen
CS111
11-5-18

In this program the user will be asked to enter integers to calculate the total price of the paint for a house.

*******************************************************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void getInfo(int &, double &);
void getWallSquareFeet(double &);
int numberOfGallons(double);

int main()
{
  int rooms;
  double paints;
  double area = 0;
  double totalWallArea;
  double gallons;
  getInfo(rooms, paints);
  for (int count = 1; count <= rooms; count++)
    {
      getWallSquareFeet(totalWallArea);
      area += totalWallArea;
    }
  gallons = numberOfGallons(area);
  gallons *= paints;
  cout << setprecision(2) << fixed;
  cout << "The total cost of paint is $" << gallons << endl;
}

void getInfo(int &numberOfRooms, double &paintPrice)
{
  do{
    cout << endl << "Enter integers: ";
    cin >> numberOfRooms >> paintPrice;
    if (numberOfRooms < 1 && paintPrice >= 10)
      {
        cout << "Number of rooms is an invalid integer." << endl;
      }
    else if (numberOfRooms < 1 && paintPrice < 10)
      {
        cout << "Number of rooms and Price of the paint per gallon integers are invalid." << endl;
      }
    else if (numberOfRooms >= 1 && paintPrice < 10)
      {
        cout << "Price of the paint per gallon is an invalid integer." << endl;
      }
    else if (numberOfRooms >= 1 && paintPrice >= 10)
      {
        cout << "Valid integers entered." << endl;
      }
  }while(numberOfRooms < 1 || paintPrice < 10);
}

void getWallSquareFeet(double &wallSquareFeet)
{
  cout << "Enter the square feet of wall space for room " << ": ";
  cin >> wallSquareFeet;
}

int numberOfGallons(double wallArea)
{
  double gal;
  gal = wallArea/140;
  return ceil(gal);
}
