/***********************************************************************************

Victor Nguyen
CS 111
10-22-18

In this program, the user will input the quantity and unit price then the total sale
for that item will be calculated, loop will be stopped when -99 is enter.

***********************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  int quantity;
  double unitPrice;
  double salesTax;
  double total;
  double subTotal;
  double totalSale;
  const double TAX = 0.12;

  while (quantity != -99)
    {
      cout << "Enter an quantity and unit price: ";
      cin >> quantity >> unitPrice;
      if ((quantity < 1 || quantity > 25) && unitPrice < 0)
	{
	  cout << "Error: This item is not valid. Quantity must be in range 1-25 and Unit price must be greater than 0." << endl;
	}
      else if ((quantity < 1 || quantity > 25) && unitPrice > 0)
	{
	  cout << "Error: This item is not valid. Quantity must be in range 1-25." << endl;
	}
      else if ((quantity > 1 && quantity < 25) && unitPrice < 0)
	{
	  cout << "Error: This item is not valid. Unit Price must be greater than 0." << endl;
	}
      else
	{
	  totalSale = quantity * unitPrice;
	  subTotal += totalSale;
	  cout << "Total sale for this item is " << totalSale << endl;
	}
    }
  salesTax = subTotal * TAX;
  total = salesTax + subTotal;
  cout << "Subtotal: " << subTotal << endl;
  cout << "Sales tax: " << salesTax << endl;
  cout << "Total: " << total << endl;
  return 0;
}
