/*******************************************************************************************************************

Victor Nguyen
CS111
9-25-18

In this program, we ask the user to input the lengh and the width calculate the area and output a messaged that
compared the two.

*******************************************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int length1, length2, width1, width2, total1, total2;
  cout << "Input the length of rectangle 1." << endl;
  cin >> length1;
  cout << "Input the width of rectangle 1." << endl;
  cin >> width1;
  cout << "Input the length of rectangle 2." << endl;
  cin >> length2;
  cout << "Input the widht of rectangle 2." << endl;
  cin >> width2;
  total1 = length1 * width1;
  total2 = length2 * width2;
  if(total1 == total2)
    {
      cout << "The areas of the two rectangles are the same." << endl;
    }
  else if (total1 > total2)
    {
      cout << "The area of the first rectangle is larger than the second rectangle." << endl;
    }
  else
    {
      cout << "The area of the first rectange is smaller than second rectangle." << endl;
    }
  return 0;
}
