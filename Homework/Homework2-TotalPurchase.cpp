/**************************************************************************

Victor Nguyen
CS111
Lab1
9-6-18
This program will get the total of 5 items and calculate the Total with tax

***************************************************************************/
#include<iostream>
using namespace std;

int main()
{
  float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, totalSale, tax, totalWtax;
  const float TAX = 0.07;
  cout << "Price of Item 1: $" << item1 << endl;
  cout << "Price of Item 2: $" << item2 << endl;
  cout << "Price of Item 3: $" << item3 << endl;
  cout << "Price of Item 4: $" << item4 << endl;
  cout << "Price of Item 5: $" << item5 << endl;
  totalSale = item1 + item2 + item3 + item4 + item5;
  cout << "Total of all Items: $" << totalSale << endl;
  tax = totalSale * TAX;
  cout << "Tax Amount 7%: $" << tax << endl;
  totalWtax = tax + totalSale;
  cout << "Total with Tax: $" << totalWtax << endl;
  return 0;
}
