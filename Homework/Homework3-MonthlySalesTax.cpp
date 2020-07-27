/****************************************************************************************

Victor Nguyen
CS111
9-18-18

In this program input the month and amount collected at the cash register at that month

****************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 string month;
 const double STATE_TAX = 0.04;
 const double COUNTRY_TAX = 0.02;
 double totalAmount, amountSales, totalSalestax, countryTax, stateTax;
 cout << "Input name of Month." << endl;
 cin >> month;
 cout << "Input the total amount collected that month." << endl;
 cin >> totalAmount;
 amountSales = totalAmount / (1 + STATE_TAX + COUNTRY_TAX);
 countryTax = amountSales * COUNTRY_TAX;
 stateTax = amountSales * STATE_TAX;
 totalSalestax = countryTax + stateTax;
 cout << "Month: " << month << endl;
 cout << "--------------------" << endl;
 cout << setprecision(2) << fixed;
 cout << "Total Collected:" << setw(6) << "$ " << totalAmount << endl;
 cout << "Sales:" << setw(16) << "$ " << amountSales << endl;
 cout << "Country Sales Tax:" << setw(4) << "$ " << countryTax << endl;
 cout << "State Sales Tax:" << setw(6) << "$ " << stateTax << endl;
 cout << "Total Sales Tax:" << setw(6) << "$ " << totalSalestax << endl;
 return 0;
}
