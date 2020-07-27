/**************************************************************************************

Victor Nguyen
CS111
9-16-18

In this program we write an equation to calculate a theater's gross and net box office
profit for a night, ask for thge name of movie and how many tickets were sold for 
adults and children.

***************************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  const double ADULT_TICKET = 10.00;
  const double CHILD_TICKET = 6.00;
  const double GROSS_PROFIT = 0.2;
  int adultSold;
  int childrenSold;
  double grossBox;
  double netBox;
  double amountPaid;
  string movieName;
  char quote;
  cout << "Enter the movie name." << endl;
  getline(cin, movieName);
  cout << "Enter the amount of adult tickets sold and the amount of children tickets sold." << endl;
  cin >> adultSold >> childrenSold;
  grossBox = (adultSold * ADULT_TICKET) + (childrenSold * CHILD_TICKET);
  netBox = (grossBox * GROSS_PROFIT);
  amountPaid = (grossBox - netBox);
  quote = '"';
  cout << "Movie Name:" << setw(24) << quote << movieName << quote << endl;
  cout << "Adult Tickets Sold:" << right << setw(20) << adultSold << endl;
  cout << "Children Tickets Sold:" << setw(17) << childrenSold << endl;
  cout << "Gross Boxx Office Profit:" << setw(10) << "$" << setprecision(2) << fixed << grossBox << endl;
  cout << "Net Box Office Profit:" << setw(13) << "$" << netBox << endl;
  cout << "Amount Paid to Distributor:" << setw(8) << "$" << amountPaid << endl; 
  return 0;
}
