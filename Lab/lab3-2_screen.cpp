/**************************************************

Victor Nguyen
CS 111
9-11-18

This program gets the perimeter, area with set hight and width to calculate
the area and permieter of the screen

 **************************************************/

#include <iostream>
using namespace std;

int main()
{
  const float HEIGHT = 12;
  const float WIDTH = 7;
  const string SCREEN = "ASUS 455L";
  const char TYPE = 'X';
  float area, perimeter;
  area = HEIGHT * WIDTH;
  perimeter = HEIGHT + HEIGHT + WIDTH + WIDTH;
  cout << "The perimeter of the screen " << SCREEN << " type " << TYPE << " is " << perimeter << endl;
  cout << "The area of the screen " << SCREEN << " type " << TYPE << " is " << area << endl;
  return 0;
}
