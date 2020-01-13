/****************************************************
Jerry Compton
CS111
Assignment #4
3/9/17

This program is a guessing game for any user. They will
enter a number and be told if they are too high or too
low. Then when they get it right. They will exit the game.
****************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  //time function to get a random number
  srand(time(0));
  int randNum;//randum number
  //set randum number
  randNum = rand()% 100 + 1;

  int guess;//users guess

  //Prompt
  cout<<"Guess a number between 1 and 100. Enter your guess: " ;
  cin>> guess;

  while(guess != randNum)//guess doesnt equal answer
    {
      if(guess > randNum)//guess too high
	cout<<"        Too high, try again. " << endl;
      else if(guess < randNum)//guess too low
	cout<<"        Too low, try again. " << endl;

      cout<<"Enter your guess: ";
      cin>> guess;
    }

  if(guess == randNum)//if they guess the correct number
    {
      cout<<"You guessed it right! " << endl;
      cout<< endl;
    }
  return 0;
}
