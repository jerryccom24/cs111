/*****************************************************************
Jerry Compton
CS111
Assignment 6
4/13/17

This Program will allow a user to enter the scores manually and then
the program will output the test scores as a table with the additional
averages for each test and average for each student.
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;

//declare constant array Sizes
const int NUM_STU = 5;
const int NUM_TEST = 3;

//ProtoTypes
void showTable(const int scores[][NUM_TEST]);
void fillArray(int score[][NUM_TEST]);

//Main Function
int main()
{
  int scores[NUM_STU][NUM_TEST];//2d array for test scores

  fillArray(scores);//fill the array
  cout<< endl;
  showTable(scores);//show table

  return 0;
}

//Function to fill up the test scores for each student
void fillArray(int scores[][NUM_TEST])
{
  for(int test = 0; test < NUM_TEST; test++)//goes thru each test
    {
      cout<<"Enter scores for Test #" << test + 1 << endl;
      
      for(int stu = 0; stu < NUM_STU; stu++)//goes thru each student
	{
	  cout<<"\t Student#"<<stu+1<<": ";
	  cin>> scores[stu][test];
	}
    }
}

//Function outputs the table 
void showTable(const int scores[][NUM_TEST])
{
  int total = 0;//total for test avg
  int totalStu = 0;//total for student avg

  //Show the labels for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  for(int test = 0;test < NUM_TEST; test++)//shows test #
    {
      cout<< setw(10)<< test+1;

      for(int stu = 0; stu < NUM_STU; stu++) //shows student score
	{
	  total = scores[stu][test] + total;//total for test average
	  
	  cout<<setw(10)<< scores[stu][test];
	}
      cout<<setw(10)<<fixed<<setprecision(1)<< (double)total/5;
      cout<< endl;
      total = 0;
    }

  cout<<setw(10)<< "Average";//each students average
  
  //nested for loop to check each students individual average
  for(int stu = 0; stu < NUM_STU; stu++)
    {
      
      for(int test = 0; test < NUM_TEST; test++)
	{
	  totalStu = scores[stu][test]+ totalStu;//total for student average
	}
      cout<<setw(10)<< fixed<< setprecision(1)<< (double)totalStu/3;
      totalStu = 0;
    }
  cout<< endl;
  cout<< endl;
}
