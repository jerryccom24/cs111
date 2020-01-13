/**************************************************
Jerry Compton
CS111
Assignment #4
3/9/17

This program will ask a user to enter a number of days. 
Then assuming their starting pay is 1 penny and doubles
every day. It will output their earnings for each day
and then total.
**************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

  int day = 1;//days entered by user
  double penny = 0.01;//penny
  double total = 0;//total salary
  //Prompt User
  cout<<"Enter the number of days you worked: ";
  cin>> day;
  
  do//reject bad inputs
   {
     //Prompt user
     cout<< "Enter the number of days you worked: ";
     cin>>day;

     for( int i = 1; i <= day; i++)//loop to output each line
       {
	 cout<< setw(5) << i << right << setw(10) << penny << endl;
	 total += penny;//totsl + penny = total
	 penny *= 2;//multiply penny by 2 and store as penny
       }

   }while( day < 1);//reject bad inputs
  //Output total
 cout<< endl;
 cout<< "Total" << setprecision(5) << right << setw(10) << total << endl;
 cout<< endl;

  return 0;
}
