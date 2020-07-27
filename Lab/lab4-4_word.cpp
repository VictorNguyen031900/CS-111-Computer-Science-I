/*******************************************************

Victor Nguyen
CS111
9-18-18

In this program the use inputs their full name, initials, and age. It will be input in to a story.

*******************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string fullName;
  char initial1, initial2;
  int age;
  cout << "Input your full name." << endl;
  getline(cin, fullName);
  cout << "Input your initials no space." << endl;
  cin.get(initial1);
  cin.get(initial2);
  cout << "Input your age." << endl;
  cin >> age;
  cout << "There once was a person named " << fullName << " whose initial was " << initial1 << initial2 << " and was " << age << " years old." << endl;
  return 0;
}
