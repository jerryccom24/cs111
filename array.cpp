/****************************************************************
Jerry Compton
CS111
Assignment 6
4/13/17

This program will give the user a menu with the options of each task
that can be performed with the array that they enter. Each option or task is 
numbered. When the user enters their choice, each function gets executed 
for the appropriate task
****************************************************************/

#include<iostream>
using namespace std;

//Prototypes
void fillArray(int ar[],int SIZE);
void printArray(int ar[],int SIZE);
double findAvg(int ar[],int SIZE);
int findHighest(int ar[],int SIZE);
void doubleArray(int ar[],int SIZE);
void selectionSort(int ar[],int SIZE);
int sequentialSearch(int ar[],int SIZE, int key);
void showBarGraph(int ar[],int SIZE);

int main()
{
  const int SIZE=5;//size of array
  int ar[SIZE];//array
  int choice;//users choice
  double avg;//average of array
  int highest;//highest number
  int key;//number user is searching for
  int value;//value of index returned

  //do while for the menu screen when they are choosing an option
do
  {
    cout<<"==================="<<endl;
    cout<<"1. Fill the array"<< endl;
    cout<<"2. Print the array"<< endl;
    cout<<"3. Calculate the average"<<endl;
    cout<<"4. Show the highest number" << endl;   
    cout<<"5. Double each number"<<endl;
    cout<<"6. Selection sort in descending order"<<endl;
    cout<<"7. Sequential Search"<< endl;
    cout<<"8. Show bar graph"<< endl;
    cout<<"9. Quit" << endl;
    cout<<"==================="<<endl;

    cout<<"Enter your choice  ";//Have user enter their choice
    cin>>choice;

    switch(choice)//each option will execute when the user selects one
      {
      case 1:cout<< endl;//fill array
	fillArray(ar,SIZE);
	cout<< endl;
	break;
      case 2: printArray(ar,SIZE);//print array
	break;
      case 3: avg = findAvg(ar,SIZE);//find average number
	cout<< "\n The average Number is "<< avg << endl;
	cout<< endl;
	break;
      case 4: highest = findHighest(ar,SIZE);//find highest number
	cout<<"\n The highest number is " << highest << endl;
	cout<< endl;
	break;
      case 5: doubleArray(ar,SIZE);//double the numbers
	break;
      case 6: selectionSort(ar,SIZE);//sort from high to low
	break;
      case 7: cout<< endl;//user will search for a number 
	cout<<"Enter the key: ";
	cin>>key;
	value = sequentialSearch(ar,SIZE,key);
	if(value != -1)//key found
	  {
	    cout<<endl;
	    cout<< key<<" was found at index " << value << endl;
	    cout<< endl;
	  }
	else//key was not found
	  {
	    cout<< endl;
	    cout<< key <<" was not found." << endl;
	    cout<< endl;
	  }
	break;
      case 8: cout<<endl;//outputs bar graph
	showBarGraph(ar,SIZE);
	cout<< endl;
	break;
      case 9:cout<< endl;//EXIT PROGRAM
	cout<<"Thanks for using our system." << endl;
	cout<< endl;
	break;
      default:cout<<"\n Invalid Choice \n" << endl;//invalid choice
      }

  }while(choice != 9);// entering a 9 will close the program

  return 0;
}

//user will fill the array
void fillArray(int ar[],int SIZE)
{
  for(int i =0; i < SIZE; i++)//fill array
    {
      cout<<"Enter a number: " ;
      cin>>ar[i];
    }
}

//print the array to the screen
void printArray(int ar[],int SIZE)
{
  cout<< endl;
  cout<< endl;
  cout<<"The numbers in the array are " ;
  for(int i=0; i < SIZE; i++)
    {
      cout<< ar[i]<<"  " ;
    }
  cout<< endl;
  cout<< endl;
}

//finds the average number of the array
double findAvg(int ar[],int SIZE)
{
  int total = 0;//total
  double avg;//average

  for(int i=0; i < SIZE; i++)//adds up each array
      total = ar[i] + total;
 
  avg = (double)total/SIZE;//calculations
  
  return avg;
}

//finds the highest number in the array
int findHighest(int ar[],int SIZE)
{
  int highestIndex =0;

  for(int i =1; i < SIZE; i++)//loop to check each value in the array
    {
      if(ar[i] > ar[highestIndex])
	highestIndex = i;
    }

  return ar[highestIndex];//returns highest number
}
 
//doubles each number in the array
void doubleArray(int ar[],int SIZE)
{
  for(int i= 0; i < SIZE; i++)
    {
      ar[i]= ar[i] * 2;//calculation
    }
}
 
//puts in order from highest to lowest
void selectionSort(int ar[],int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      for(int f = i+1; f<SIZE; f++)//check each number to the right 
	{
	  if(ar[f] >  ar[i])//if number on the right is bigger
	    {
	      int temp;//temp variable to hold number
	      temp = ar[i];
	      ar[i] = ar[f];//swaps left and right number
	      ar[f] = temp;//set temporary number back to right index
	    }
	}
    }
}

//finds a number the user enters in the main function
int sequentialSearch(int ar[],int SIZE, int key)
{
  for(int i= 0; i<SIZE;i++)
    {
      if(ar[i] == key)//key found
	return i;
    }

  return -1;//key not found
}

//outputs bar graph of the numbers in the array
void showBarGraph(int ar[],int SIZE)
{
  for(int i = 0; i<SIZE; i++)
    {
      cout<<"Slot "<<i<<":";

      for(int star = 10; star <= ar[i]; star+=10)//incrememnr by 10
	{
	  cout<<"*";//10 = 1 star
	}
      cout<<endl;
    }
}
	  
	  
