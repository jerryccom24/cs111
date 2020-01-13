#include <iostream>
using namespace std;

int main ()
{
  int cent = 0;
  double inch = 0;
  int flatLen = 0;
  int yards = 0;
  int feet = 0;
  int inches = 0;
  int flatLen2;

  //Title
  cout << "********************************************" << endl;
  cout << " This Program will convert a length in centimeters to yards,feet, and inches" << endl;
  cout << "********************************************" << endl;
  


  //Prompt
  cout << "Please enter a length in centimeters: " << endl;
  cin >> cent;
  


  //Formula
  

  inch  = (int)cent / 2.54;
  flatLen = (int)(inch +0.5);
  


  flatLen2 = flatLen;


  // MODULUS WORK
  yards = flatLen / 36;
  flatLen = flatLen % 36;
  
  feet = flatLen / 12;
  flatLen = flatLen % 12;

  inches = flatLen;

  //OUTPUT 1
  cout << cent << " cm is about " << inch << " inches rounded to " << flatLen2 << endl;    

  //OUTPUT 2
  cout << flatLen2  << "inches= " << yards << " yards, " << feet << " feet, and " << inches << "inches. " << endl;  

 

 //Goodbye
  cout << "Thank you for using the program. Good bye. " <<endl;
  

  return 0;
}
