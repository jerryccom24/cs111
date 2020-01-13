#include<iostream>
#include<cstdlib>
using namespace std;

//PROTOTYPES
int rollDice();
//PROTOTYPES

int main()
{
  srand(time(0));
  int roll;
  int rollAgain;

  roll = rollDice();
  cout<< roll << endl;

  if(roll == 7 || roll == 11)
    cout<<"win" << endl;

  else if( roll == 2 || roll ==3 || roll ==12)
    cout<< "lose" << endl;

  else 
    {
      do{
	rollAgain = rollDice();
	cout<< rollAgain << endl;
    
      }while(rollAgain != 7 && rollAgain != roll);
    }

  if( rollAgain == 7)
    cout<<"Lose" << endl;

  else if(rollAgain == roll)
    cout<< "Win" << endl;

  return 0;
}


int rollDice()
{
  int roll;
  roll = (rand()% 6 + 1) + (rand()% 6 + 1);

  return roll;
}
