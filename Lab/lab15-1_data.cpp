/******************************************************************************

Victor Nguyen
CS111
12-4-18

In this program, it will demonstrate the use of classes

******************************************************************************/

#include <iostream>

using namespace std;

class Date
{
private:
  int month;
  int day;
  int year;
  string test[13] = {"BLANK", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
public:
  void choiceOne() const;
  void choiceTwo() const;
  void choiceThree() const;
  void setMonth(int);
  void setDay(int);
  void setYear(int);
};

void Date::setMonth(int m)
{
  month = m;
}

void Date::setDay(int d)
{
  day = d;
}

void Date::setYear(int y)
{
  year = y;
}

void Date::choiceOne() const
{
  cout << endl << month << "/" << day << "/" << year << endl << endl;
}

void Date::choiceTwo() const
{
  cout << endl << test[month] << " " << day << ", " << year << endl << endl;
}

void Date::choiceThree() const
{
  cout << endl << day << " " <<  test[month] << " " << year << endl << endl;
}

void menu();

int main()
{
  int month;
  int day;
  int year;
  int choice;
  bool result = true;
  Date a;

  do{
    cout << "Enter the month(Integer)" << endl;
    cin >> month;
    cout << "Enter the day(Integer)" << endl;
    cin >> day;
    cout << "Enter the year(Intege)" << endl;
    cin >> year;
    if((month < 1 || month > 12) || (day < 1 || day > 31))
      {
	cout << "Month or Day is invalid. Enter Again." << endl << endl;;
	result = false;
      }
    else
      {
	result = true;
	a.setMonth(month);
	a.setDay(day);
	a.setYear(year);
      }
  }while(result == false);


  do{
    menu();
    cin >> choice;

    switch(choice)
      {
      case 1:
	{
	  a.choiceOne();
	  break;
	}
      case 2:
	{
	  a.choiceTwo();
	  break;
	}
      case 3:
	{
	  a.choiceThree();
	  break;
	}
      case 4:
	{
	  cout << endl << "You quit the program." << endl << endl;
	  break;
	}
      default:
	{
	  cout << endl << "Invalid choice." << endl;
	  break;
	}
      }
  }while(choice != 4);
}

void menu()
{
  cout << endl << "Menu: " << endl;
  cout << "1. Month# /Day/Year" << endl;
  cout << "2. Month Day, Year" << endl;
  cout << "3. Day Month Year"  << endl;
  cout << "4. Quit" << endl;
  cout << "Enter your choice: ";
}
