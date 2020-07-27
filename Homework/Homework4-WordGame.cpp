/************************************************************************

Victor Nguyen
CS 111
9-25-18

In this program we ask the user to input their information and we output
a story using the user's information.

************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  string fullName, cityName1, cityName, collegeName, profession, animalType, petName;
  int age, year;
  char firstInitial, secondInitial, petNick;
  cout << "Enter your first and last name." << endl;
  getline(cin, fullName);
  cout << "Enter your initials." << endl;
  cin.get(firstInitial);
  cin.get(secondInitial);
  cout << "Enter your age." << endl;
  cin >> age;
  cin.ignore();
  cout << "Enter the name of your city." << endl;
  getline(cin, cityName);
  cout << "Enter the name of your college." << endl;
  getline(cin, collegeName);
  cout << "Enter the year." << endl;
  cin >> year;
  cin.ignore();
  cout << "Enter your profession." << endl;
  getline(cin, profession);
  cout << "Enter a type of animal." << endl;
  cin >> animalType;
  cout << "Enter a pet's name." << endl;
  cin >> petName;
  cin.ignore();
  cout << "Enter the pet's nickname as only one character." << endl;
  cin.get(petNick);
  cout << endl << "There once was a person named " << fullName << ", whose initial was " << firstInitial << secondInitial << " and lived in " << cityName << ".  At the age of " << age << ", " << fullName << " went to college at " << collegeName << ".  " << fullName << " graduated in " << year << " and went to work as a " << profession << ".  Then, " << fullName << " adopted a(n) " << animalType << " named " << petName << ", which is called " << petNick << ".  They both lived happily ever after!" << endl;
  return 0;
}
