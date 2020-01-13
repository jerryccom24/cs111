/***************************************************************
Jerry Compton
CS111
3/9/17
Assignment #4

This program will ask a user to enter ages. The program will determine
the oldest , youngest, and how many minors and adults are in the group.
Then the program will output the results as well as the average.
The user will enter a negative number when they are finished.
***************************************************************/
#include<iostream>
using namespace std;

int main()
{

  int age = 0; // age entered
  int minor = 0; // number of minors
  int adult = 0; // number of adults
  int oldest = -999; // oldest
  int youngest = 999; //youngest
  int total = 0; //sum of all ages
  int  num = 0; //number of ages
  double avg; //average age
  
  //Prompt user
  cout<<"Enter an age: ";
  cin>> age;

  while( age >= 0 )// check if age greater or equal to 0
    {
      total = total + age; //calculate total
  
      if(age > oldest) // check if oldest
	{ 
	  oldest = age; 
	}
      if(age < youngest)//check if youngest
	{
	  youngest = age;
	}
      num++; //add one to number of ages

      if(age >= 18) // check if adult
	adult++;
      else //check if minor
	minor++;

      //Prompt user again
      cout<<"Enter an age: ";
      cin>>age;

    }

  if(num  == 0) // if no ages were entered
    {
      cout<< endl;
      cout<<"No ages were entered" << endl;
      cout<< endl;
    }
  else //output results
    {
      cout<< endl;
      avg = ((double)total / num);
      cout<< avg << "(average)" << endl;
      cout<< minor << "(minors)" << endl;
      cout<< adult << "(adults)" << endl;
      cout<< oldest << "(oldest)" << endl;
      cout<< youngest << "(youngest)" << endl;
      cout<< endl;
    }
  return 0;
}
