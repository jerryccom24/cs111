/***************************************************************************
Jerry Compton
CS111
Assignment 2
2/16/17

This program will recieve a hour time and minute time and output to the user
the degrees from 00.00(time) for each hand. 
****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // initialize variables
  int hourhand; //hours entered by user
  double hourangle;  
  double minuteangle;

  //prompt user
  cout <<"Enter hours: ";
  cin >> hourhand;
 
  cout << "Enter minutes: ";
  cin >> minuteangle;


  //PROCESS for hourhand angle
  hourhand = hourhand % 12; //using modulus to find remainder
  hourangle = (hourhand * 30) + (minuteangle / 2); //equation gives us hourhand angle
 
  //PROCESS for minutehand angle
  minuteangle = minuteangle * 6; //equation gives us minutehand angle
  
  //outputs
  cout <<"The angle of the hour hand is : " << hourangle  << endl;
  cout <<"The angle of the minute hand is : " << minuteangle << endl;

  return 0;
}
