lab3-3_bird.cpp/*************************************************************

Victor Nguyen
CS111
9-13-18

In this program, the user will input integers for variables x,y,z, and k.
Those would be put into expressions and calculate and output

**************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int x, y, z, k, a, b, c, f;
  double d, e;
  cout << "Input integers for variables x, y, z, and k";
  cin >> x >> y >> z >> k;
  a = 12*k;
  b = (5*k)+(14*y)+(6*z);
  c = pow(x,4);
  d = (y+12)/(static_cast<double>(4*k));
  e = pow(k,3)/(pow(y,2)*pow(z,4));
  f = static_cast<int>(pow(k,2))%(y*static_cast<int>(pow(z,2)));
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  cout << "e = " << e << endl;
  cout << "f = " << f << endl;
  return 0;

}
