/***********************************************************
Jerry Compton
CS111
Assignment 5
3/30/2017

This program play an inputted number of games of craps that is requested 
by the user. Then it will output the percentage of wins and loses.
***********************************************************/
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

//PROTOTYPES
int rollDice();
bool playGame();
//PROTOTYPES
int main()
{
  srand(time(0));//for random number
  int numGames;//number of games
  double win = 0;//number of wins
  int game;//won game or lost game

  //Prompt user to enter number of games
  cout<<"How many games do you want to play? " ;
  cin>>numGames;
 
  //play the amount of games the user entered
  for(int i = 1; i < numGames; i++)
    {
      game =  playGame();//play game
      if(game == true)//true game = game is won
	win++;
    }

  //CALCULATE PERCENTAGES
  cout<<setw(10)<< "win %" << setw(10)<< "lose %" << endl;
  cout<<setw(10)<<fixed<<setprecision(3)<< (win /numGames)*100.0 << setw(10) <<fixed<<setprecision(3)<< ((numGames - win)/numGames)*100.0 << endl; 

  return 0;
}


bool playGame()//plays 1 game
{
  int roll;//roll of dice
  int rollAgain; //next roll

  roll = rollDice();

  if(roll == 7 || roll == 11)//win
    {
      return true;
    }
  else if( roll == 2 || roll ==3 || roll ==12)//loss
    {
      return false;
    }
  else 
    {
      do{
	rollAgain = rollDice();
    
      }while(rollAgain != 7 && rollAgain != roll);//keep rolling
    }

  if( rollAgain == 7)//loss
    {
      return false;
    }
  else if(rollAgain == roll)//win
    {
      return true;
    }
}


int rollDice()//rolls the dice
{
  int roll;
  roll = (rand()% 6 + 1) + (rand()% 6 + 1);//sum of 2 random numbers between 1 and 6

  return roll;
}
