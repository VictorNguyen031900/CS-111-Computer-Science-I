/***************************************************************************************

Victor Nguyen
CS111
11-8-18

In this program, the user will input the number of rooms and the price of a gallon of
paint.  The program will then calculate the required amount of paint, the hours of labor,
the cost of paint, labor charges, and the total cost of the job.

**************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getInfo(int &, double &);
void getWallSquareFeet(double &);
double numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main()
{
  int rooms;
  double paint;
  double totalWallArea;
  int numGallons;
  double hours;
  getInfo(rooms, paint);
  for(int i = 1; i <= rooms; i++)
    {
      getWallSquareFeet(totalWallArea);
    }
  cout << "Total Square Feet: " << totalWallArea << endl;
  numGallons = ceil(numberOfGallons(totalWallArea));
  hours = laborHours(totalWallArea);
  displayCost(numGallons, paint, hours);
}

void getInfo(int &numberOfRooms, double &paintPrice)
{
  do{
    cout << "Enter the number of rooms and the price of a gallon of paint: ";
    cin >> numberOfRooms >> paintPrice;
    if(numberOfRooms < 1 && paintPrice < 10)
      {
	cout << "# of rooms and $/gallon invalid." << endl;
      }
    else if (numberOfRooms < 1 && paintPrice >= 10)
      {
	cout << "# of rooms invalid." << endl;
      }
    else if (numberOfRooms >= 1 && paintPrice < 10)
      {
	cout << "$/gallon invalid." << endl;
      }
    else if (numberOfRooms >= 1 && paintPrice >= 10)
      {
	cout << "# of rooms and $/gallon valid." << endl;
      }
  }while(numberOfRooms < 1 || paintPrice < 10);
}

void getWallSquareFeet(double &wallSquareFeet)
{
  double squareFeet;
  do{
    cout << "Enter Square Feet: ";
    cin >> squareFeet;
    if(squareFeet < 0)
      {
	cout << "Invalid input." << endl;
      }
    wallSquareFeet += squareFeet;
  }while(squareFeet < 0);
}

double numberOfGallons(double wallArea)
{
  double gallons;
  gallons = wallArea/140;
  return gallons;
}

double laborHours(double wallArea)
{
  double labor;
  labor = ceil((wallArea/140))*8;
  return labor;
}

void displayCost(int gallons, double paintPrice, double hours)
{
  cout << gallons << " gallons of paint required." << endl;
  cout << hours << " hours of labor required." << endl;
  cout << "Paint cost $" << setprecision(2) << fixed << paintPrice << endl;
  cout << "$30.00 per hour" << endl;
  cout << "Total cost of job $" << setprecision(2) << fixed << (gallons*paintPrice)+(hours*30) << endl;
}
