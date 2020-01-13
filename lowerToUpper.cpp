/**********************************************************************************
Jerry Compton
CS111
Assignment 2
2-16-17

This program will ask a user to enter a lowercase letter. Then, it will convert that
number into an Uppercase letter with the help of the ascii table and character
casting.
**********************************************************************************/
#include <iostream>
using namespace std;

int main()
{

  //initialize variables for lower and uppercase
  char lower;
  char upper;

  //Prompt user to enter a lowercase letter
  cout << "Enter a lowercase letter: ";
  cin >> lower;

  // cast the lowercase letter as an integer
  upper = (int)lower - 32;
  
  //cast the uppercase as a character
  upper = (char)upper;

  //output the result
  cout << "The uppercase is " << upper <<"." << endl;


  return 0;
}
