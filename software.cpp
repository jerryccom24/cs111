/****************************************************************************
Jerry Compton
CS111
Assignment 3
3-2-17

This program will ask a user to input the date, name of company and
quantity of software they are purchasing. It will then determine their
discount and output an invoice of their purchase. If they do not want 
to purchase software, it will thank them. If they enter an invalid 
quantity, they will be told it is an invalid quantity.
****************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  //initialize variables
  string date; //date enetered by user
  string company; //company entered by user
  double quantity; //quantity entered by user
  double discount; //discount percentage
  double price; // price of software
  double discountPrice; //amount of discount
  double total; // price after discount
 
  //prompt the user
  cout<<"Enter today's date (mm/dd/yy): ";
  cin>> date;
  
  //use getline for the company name
  cin.ignore(100,'\n');
  cout<<"Enter your company name: ";
  getline(cin,company);

  //get the quantity
  cout<<"Enter the quantity you would like to purchase: ";
  cin >> quantity;
  cout<< endl;
  
  if(quantity > 0 ) //if quantity greater than 0, then run the conditions
    {
      if(quantity >= 10 && quantity <= 19) //first discount range
       discount = 0.2;
  
      else if(quantity >= 20 && quantity <= 49) //second discount range
       discount = 0.3;

      else if(quantity >= 50 && quantity <= 99) //third discount range
       discount = 0.4;

      else if(quantity >= 100) //fourth discount range
       discount = 0.5;

      else if(quantity > 0 && quantity < 10) // 0 discount
       discount = 0;
    

  //calculations
  price = quantity * 99;
  discountPrice = price * discount;
  total = price - discountPrice;


  //OUTPUT INVOICE
  cout<<"Invoice for " << company << endl;
  cout<< endl;

  cout<< left << setw(30) << "Price before discount         $" << right << setw(10) << fixed << setprecision(2) << price << endl;
  cout<< left << setw(30) << "Discount                      $" << right << setw(10)  << discountPrice << endl;
  cout<< left << setw(30) << "Total Due                     $" << right << setw(10) << total << endl;
  cout<< endl;
    }

  else if(quantity == 0) // They are not buying any products
    {
      cout<< "Hope you decide to buy our software in the future." << endl;
      cout<< endl;
    }
  else //quantity less than 0
    {
      cout<< "Invalid Quantity" << endl;
      cout<< endl;
    }
  return 0;
}
