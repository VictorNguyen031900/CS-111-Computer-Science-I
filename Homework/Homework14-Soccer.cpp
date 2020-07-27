/**************************************************************************

Victor Nguyen
CS111
11-27-18

In this program, it will use array of structs operations

**************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

struct Player
{
  string name;
  int number;
  string address;
  string city;
  string state;
  int zip;
  string phone;
  string date;
  int points;
};

Player team[10];
Player newPlayer;

void readData(Player team[])
{
  std::fstream file;
  file.open("team.txt");
  for(int i = 0; !file.eof(); i++)
    {
      file >> team[i].name;
      file >> team[i].number;
      file >> team[i].address;
      file >> team[i].city;
      file >> team[i].state;
      file >> team[i].zip;
      file >> team[i].phone;
      file >> team[i].date;
      file >> team[i].points;
    }
  file.close();
}

void menu();
void displayData(Player team[]);
void getAverage(Player team[]);
void getHighest(Player team[]);
Player getTarget(Player team[]);
void replaceTarget(Player newPlayer,Player team[]);

int main()
{
  readData(team);
  int choice;
  do{
    menu();
    cin >> choice;
  switch(choice)
    {
    case 1:
      {
	displayData(team);
	break;
      }
    case 2:
      {
	getAverage(team);
	break;
      }
    case 3:
      {
	getHighest(team);
	break;
      }
    case 4:
      {
	Player holdPlayer;
	holdPlayer = getTarget(team);
	cout << endl;
	cout << "Name: " << holdPlayer.name << endl;
	cout << "Number: " << holdPlayer.number << endl;
	cout << "Address: " << holdPlayer.address << endl;
	cout << "City: " << holdPlayer.city << endl;
	cout << "State: " << holdPlayer.state << endl;
	cout << "Zip: " << holdPlayer.zip << endl;
	cout << "Phone: " << holdPlayer.phone << endl;
	cout << "Date: " << holdPlayer.date << endl;
	cout << "Points: " << holdPlayer.points << endl;
	break;
      }
    case 5:
      {
	cout << "Enter information for new player: " << endl;
	cout << "Name(Replace spaces with '_'): ";
	cin >> newPlayer.name;
	cout << "Number: ";
	cin >> newPlayer.number;
	cout << "Address(Replace spaces with '_'): ";
	cin >> newPlayer.address;
	cout << "City(Replace spaces with '_'): ";
	cin >> newPlayer.city;
	cout << "State: ";
	cin >> newPlayer.state;
	cout << "Zip: ";
	cin >> newPlayer.zip;
	cout << "Phone: ";
	cin >> newPlayer.phone;
	cout << "Date: ";
	cin >> newPlayer.date;
	cout << "points: ";
	cin >> newPlayer.points;
	replaceTarget(newPlayer, team);
	break;
      }
    case 6:
      {
	cout << "You quit the program." << endl;
	break;
      }
    default:
      {
	cout << "Invalid choice." << endl;
	break;
      }
    }
  }while(choice != 6);
  return 0;
}

void displayData(Player team[])
{
  for(int i = 0; i < 10; i++)
    {
      cout << endl;
      cout << "Team member" << i+1 <<": ";
      cout << endl << "Name: " << team[i].name;
      cout << endl << "Number: " << team[i].number;
      cout << endl << "Address: " << team[i].address;
      cout << endl << "City: " << team[i].city;
      cout << endl << "State: " << team[i].state;
      cout << endl << "Zip: " << team[i].zip;
      cout << endl << "Phone: " << team[i].phone;
      cout << endl << "Date: " << team[i].date;
      cout << endl << "Points: " << team[i].points;
      cout << endl << endl;
    }
}

void getAverage(Player team[])
{
  double total = 0;
  double avg;
  for(int i = 0; i < 10; i++)
    {
      total += team[i].points;
    }
  avg = total / 10;
  cout << "The avgerage is " << avg << endl;
  for(int i = 0; i < 10; i++)
    {
      if(team[i].points > avg)
	{
	  cout << endl;
	  cout << "Team member" << i+1 <<": ";
	  cout << endl << "Name: " << team[i].name;
	  cout << endl << "Number: " << team[i].number;
	  cout << endl << "Address: " << team[i].address;
	  cout << endl << "City: " << team[i].city;
	  cout << endl << "State: " << team[i].state;
	  cout << endl << "Zip: " << team[i].zip;
	  cout << endl << "Phone: " << team[i].phone;
	  cout << endl << "Date: " << team[i].date;
	  cout << endl << "Points: " << team[i].points;
	  cout << endl << endl;
	}
    }
}

void getHighest(Player team[])
{
  int index = 0;
  int high = team[0].points;
  for(int i = 0; i < 10; i++)
    {
      if(high <= team[i].points)
	{
	  high = team[i].points;
	  index = i;
	}
    }
  cout << endl;
  cout << "Team member" << index+1 <<": ";
  cout << endl << "Name: " << team[index].name;
  cout << endl << "Number: " << team[index].number;
  cout << endl << "Address: " << team[index].address;
  cout << endl << "City: " << team[index].city;
  cout << endl << "State: " << team[index].state;
  cout << endl << "Zip: " << team[index].zip;
  cout << endl << "Phone: " << team[index].phone;
  cout << endl << "Date: " << team[index].date;
  cout << endl << "Points: " << team[index].points;
  cout << endl << endl;
}

Player getTarget(Player team[])
{
  int num;
  Player targetPlayer;
  do{
  cout << "Enter integer 0-9: ";
  cin >> num;
  if(num < 0 || num > 9)
    {
      cout << "Invalid integer." << endl;
    }
  }while(num < 0 || num > 9);
  targetPlayer.name = team[num].name;
  targetPlayer.number = team[num].number;
  targetPlayer.address = team[num].address;
  targetPlayer.city = team[num].city;
  targetPlayer.state = team[num].state;
  targetPlayer.zip = team[num].zip;
  targetPlayer.phone = team[num].phone;
  targetPlayer.date = team[num].date;
  targetPlayer.points = team[num].points;
  return targetPlayer;
}

void replaceTarget(Player newPlayer, Player team[])
{
  int num;
  do{
    cout << "Enter integer 0-9: ";
    cin >> num;
    if(num < 0 || num > 9)
      {
	cout << "Invalid integer." << endl;
      }
  }while(num < 0 || num > 9);
  team[num].name = newPlayer.name;
  team[num].number = newPlayer.number;
  team[num].address = newPlayer.address;
  team[num].city = newPlayer.city;
  team[num].state = newPlayer.state;
  team[num].zip = newPlayer.zip;
  team[num].phone = newPlayer.phone;
  team[num].date = newPlayer.date;
  team[num].points = newPlayer.points;
  cout << "Repleaced target." << endl;
}

void menu()
{
  cout << endl;
  cout << "Menu:" << endl;
  cout << "1. Display data " << endl;
  cout << "2. Average " << endl;
  cout << "3. Highest " << endl;
  cout << "4. Get Target" << endl;
  cout << "5. Replace Target" << endl;
  cout << "6. Quit " << endl;
  cout << "Enter choice: ";
}
