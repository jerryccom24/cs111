#include<iostream>
#include<iomanip>
using namespace std;
#include"myMath.h"


int main()
{
  int count = 0;
  int newCount = 0;

  for( int i = 2; i < 1000; i++)
    {
      isPrime(i);
      if(isPrime(i))
	{
	  cout<< setw(5) << i ;
	  count++;
	  newCount++;
	}
      if(count == 10)
	{
	  cout<< endl;
	  count = 0;
	}
    }

  cout<< endl;
  cout<< "There are " << newCount <<" prime numbers between 2 and 1000." << endl;

  return 0;
}
