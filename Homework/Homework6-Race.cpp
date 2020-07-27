/********************************************************************************************

Victor Nguyen
CS 111
10-4-18

In this program, the user will input the name of three runners and their times and it will be
displayed according to time.

********************************************************************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  string runner1;
  string runner2;
  string runner3;
  double time1;
  double time2;
  double time3;

  cout << "Enter the name of runner 1." << endl;
  getline(cin, runner1);
  cout << "Enter the time runner 1 completed." << endl;
  cin >> time1;
  cout << "Enter the name of runner 2." << endl;
  cin.ignore();
  getline(cin, runner2);
  cout << "Enter the time runner 2 completed." << endl;
  cin >> time2;
  cout << "Enter the name of runner 3." << endl;
  cin.ignore();
  getline(cin, runner3);
  cout << "Enter the time runner 3 completed." << endl;
  cin >> time3;
  if (time1 < 0 || time2 < 0 || time3 < 0)
    {
      cout << "Invalid time" << endl;
    }
  else
    {
  if (time1 > time2 && time1 > time3)
    {
      if (time2 > time3)
	{
	  cout << "1. " << runner1 << "  " << time1 << endl;
	  cout << "3. " << runner3 << "  " << time3 << endl;
	}
      else
	{
	  cout << "1. " << runner1 << "  " << time1 << endl;
	  cout << "3. " << runner2 << "  " << time2 << endl;
	}
    }
  else if (time2 > time1 && time2 > time3)
    {
      if (time1 > time3)
	{
	  cout << "1. " << runner2 << "  " << time2 << endl;
          cout << "3. " << runner3 << "  " << time3 << endl;
	}
      else
	{
	  cout << "1. " << runner2 << "  " << time2 << endl;
          cout << "3. " << runner1 << "  " << time1 << endl;
	}
    }
  else if (time3 > time1 && time3 > time2)
    {
      if (time1 > time2)
	{
	  cout << "1. " << runner3 << "  " << time3 << endl;
	  cout << "3. " << runner2 << "  " << time2 << endl;
	}
      else
	{
	  cout << "1. " << runner3 << "\t\t" << time3 << endl;
          cout << "3. " << runner1 << "\t\t" << time1 << endl;
        }
    }
    }
  return 0;
}
