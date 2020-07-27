/********************************************************

Victor Nguyen
CS111
9-18-18

In this program we are given three constants which are prices of tables,
we are suppose to input the amount of each sold.

********************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const double ROUND = 95.00;
  const double EXPANDABLE = 67.50;
  const double METROPOLITAN = 227.75;
  double a, b, c, d, e, f, g;
  cout << "Please input the number of Round tables sold" << endl;
  cin >> a;
  cout << "Please input the number of Expandable tables sold" << endl;
  cin >> b;
  cout << "Please input the number of Metropolitan Rectangular tables sold" << endl;
  cin >> c;
  d = ROUND*a;
  e = EXPANDABLE*b;
  f = METROPOLITAN*c;
  g = d + e + f;
  cout << "The total sales of Round tables  $ " << setprecision(2) << fixed << d << endl;
  cout << "The total sales of Expandable tables   $"  << e << endl;
  cout << "The total sales of Metropolitan Rectangular tables  $" << f << endl;
  cout << "The total sales of all tables  $" << g << endl;
  return 0;
}
