#include <iostream>
using namespace std;

int main()
{
  char grade;
  bool pass;
 
  pass = false;



  cout<<"Enter your grade: ";
  cin >> grade;
  
  
  if (grade == 'A' || grade == 'B')
    {
      cout<<"Good job " << endl;
      pass= true;   
    }

 
  else if (grade == 'C')
    {
      cout<<"OK " << endl;
      pass= true;
    }
 
  else if (grade == 'D' || grade == 'F')
    {
      cout<<"Work Harder " << endl;
    }
 
  else
    cout<<"Invalid Grade" << endl;
  
  if(pass == true)
    cout<<"Congratulations! You passed the class." << endl;





  return 0;
}
