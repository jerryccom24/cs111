/***************************************************************
Jerry Compton
CS111
Assignment 3
3-2-17

This program will ask the user to enter a integer month. Then,
the program will calculate the electric bill based on their 
current and previous meter readings. If they do not enter the
correct meter readings they will be informed that their meter
readings are invalid. Also by using a switch we can determine 
each overage price for certain months.
***************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  int month; //month entered by user
  int currMeter; //current meter reading
  int prevMeter; //previous meter reading
  double total; // current meter - previous meter
  double difftotal; // how much over 400KWH
  double amount; // total money due

  //prompt user
  cout<<"Enter the month: ";
  cin>> month;

  if(month <= 0 || month > 12) //check for invalid month
    {
      cout<< month << " is an invalid month" << endl;
      cout<< endl;
    }
  else //month is a valid month
  {
    cout<<"Enter the current meter reading: ";
    cin>> currMeter;
    cout<<"Enter the previous meter reading: ";
    cin>> prevMeter;
       
    if(prevMeter > currMeter || prevMeter < 0)// check for invalid meter reading
	{
	  cout<<"These readings are invalid" << endl;
	  cout<< endl;
	}
    else //meter reading is valid
	{
	  total = currMeter - prevMeter;
	  difftotal = total - 400;



	  if(total > 400)// check for overage & output amount due
	    {
	      switch(month) // use switch for each month
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 10:
		case 11:
		case 12: amount = (.06575 * difftotal) + 8.50;
		    break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: amount = (.07525 * difftotal) + 8.50;
		  break;
		}
	      cout<< endl;
	      cout<< "You consumed " << total << " and your amount due is " << fixed << setprecision(2) << "$" << amount << endl;
	      cout<< endl;
	    }	  
	  else //no overage & output amount due
	    {
	      amount = 8.50;
	      cout<< endl;
	      cout<< "You consumed " << total << " and your amount due is " << fixed << setprecision(2) << "$" << amount << endl;
	      cout<< endl;
	    }
	}
 
  }
  return 0;
}
 
