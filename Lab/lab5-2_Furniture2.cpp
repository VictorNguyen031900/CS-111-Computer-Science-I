/***************************************************************************************

Victor Nguyen
CS111
9-27-18

In the program, the user will enter the amount of each table that was sold and the program
will output if it is a great deal

***************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
  const double ROUND = 95.00;
  const double EXPANDABLE = 67.50;
  const double METRO = 227.75;
  double tSold, rTotal, eTotal, mTotal;
  int rSold, eSold, mSold;
  cout << "Enter how many Round tables were sold." << endl;
  cin >> rSold;
  cout << "Enter how many Expandable tables were sold." << endl;
  cin >> eSold;
  cout << "Enter how many Metropolitan Rectangular tables were sold." << endl;
  cin >> mSold;
  rTotal = rSold * ROUND;
  eTotal = eSold * EXPANDABLE;
  mTotal = mSold * METRO;
  tSold = rTotal + eTotal + mTotal;
  cout << "$" << tSold << endl;
  if (1000 <= tSold)
    {
      cout << "Great Sale!" << endl;
    }
  else if (500 <= tSold && tSold <= 999)
    {
      cout << "Good Sale." << endl;
    }
  else if (250 <= tSold && tSold <= 499)
    {
      cout << "Low Sale." << endl;
    }
  else if (tSold <= 249)
    {
      cout << "The sale is canceled." << endl;
    }
  return 0;
}
