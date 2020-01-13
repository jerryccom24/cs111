/**********************************************************
Jerry Compton
CS111
Assignment #4
3/9/17

This program will display the ascii characters from 33 to 
126 with only 16 characters per line. 
**********************************************************/
#include<iostream>
using namespace std;

int main()
{
  int count = 0; //to count how many characters

  for(int ascii = 33; ascii <= 126; ascii++) //start at 33 and add 1 til 126
    {
      count+= 1;
      cout<<(char)ascii << " "; //cast char to get a character
   
      if(count == 16) //create new line at 16 characters 
	{
	  cout<< endl;
	  count = 0; //reset count
	}

      else if(ascii == 126) //end line at 126
	{
	  cout<< endl;
	}
    }


  return 0;
}
