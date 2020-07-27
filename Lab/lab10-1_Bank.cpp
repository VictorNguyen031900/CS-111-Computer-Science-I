/*******************************************************************

Victor Nguyen
CS111
10-30-18

In this program, the program will read from the input file and output
the bank owner name and remaining balance.

*******************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string ownerName;
  int currentBalance;
  int amountDue;
  int total;

  ifstream infile;
  ofstream outfile;
  infile.open("input.txt");
  outfile.open("output.txt");

  if (infile)
    {
      cout << "Opened successfully" << endl;
      while(infile >> ownerName >> currentBalance >> amountDue)
	{
	  total = currentBalance - amountDue;
	  outfile << ownerName << " " << total << endl;
	}

    }
  else
    {
      cout << "Unsuccessfully opened" << endl;
    }

  infile.close();
  outfile.close();
  return 0;
}
