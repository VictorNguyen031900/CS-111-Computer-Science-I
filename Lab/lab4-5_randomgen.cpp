/************************************************************

Victor Nguyen
CS111
9-20-18

In this program we generate 4 integers from 0-200 and calculate different things

*************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int a, b, c, d, sum, mod;
  double divide;
  unsigned seed = time(0);
  srand(seed);
  a = (rand()/static_cast<double>(RAND_MAX)) * 200;
  b = (rand()/static_cast<double>(RAND_MAX)) * 200;
  c = (rand()/static_cast<double>(RAND_MAX)) * 200;
  d = (rand()/static_cast<double>(RAND_MAX)) * 200;
  cout << a << ", " << b << ", " << c << ", " << d << endl;
  sum = a + b + c + d;
  cout << "The sum is " << '"' << sum << '"' << endl;
  divide = a / static_cast<double>(c);
  cout << "First integer divded by third integer is " << setprecision(4) << fixed << '"' <<  divide << '"' << endl;
  mod = b % d;
  cout << "Second integer modulus fourth number is " << '"' << mod << '"' << endl;
  a += 1;
  b += 1;
  c += 1;
  d += 1;
  cout << a << ", " << b << ", " << c << ", " << d << endl;
  a -= 6;
  b -= 6;
  c -= 6;
  d -= 6;
  cout << a << ", " << b << ", " << c << ", " << d << endl;
  return 0;
}
