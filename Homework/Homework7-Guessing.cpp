/***********************************************************************************************

Victor Nguyen
CS111
10-15-18

In the program, the user will try to guess a random integer between the ranges of 1 and 5, if the user
is higher than generated integer then it will display too high but if integer guessed is lower,
it will display too low.

**********************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int guess;
  int guessIt;
  srand(time(0));
  guessIt = rand() % 5 + 1;
  do{
    cout << "Guess an integer from 1-5 please: ";
    cin >> guess;
    if (guess < 1 || guess > 5)
      {
	cout << "Invalid integer, guess again." << endl;
      }
    else if (guess < guessIt)
      {
	cout << "Too low, try again." << endl;
      }
    else if (guess > guessIt)
      {
	cout << "Too high, try again." << endl;
      }
    else
      {
	cout << "You got it correct!" << endl;
      }
  }while(guess != guessIt);
  return 0;
}
