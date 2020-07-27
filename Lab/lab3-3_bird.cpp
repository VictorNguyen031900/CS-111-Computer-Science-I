/************************************************************************

Victor Nguyen
CS111
9-13-18

In this program you have two constants and one float variable to find the speed
of the bird.

 ***********************************************************************/

#include <iostream>
using namespace std;

int main()
{
  const int MILES = 9;
  const int HOURS = 29;
  float speed;
  speed = static_cast<float>(MILES) / (HOURS);
  cout << "The speed of the bird is " << speed << " miles per hour." << endl;
  return 0;
}
