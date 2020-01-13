#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  srand(time(0));
  const int SIZE = 10;
  int ar[SIZE];
  int temp;
 
  for(int i=0; i<SIZE;i++)
    {
      ar[i] = (rand()% 100 +1);
    }

  for(int i=0; i<SIZE;i++)
    {
      cout<< ar[i] << "   " ;
    }

  cout<< endl;

  for(int l=0,r = SIZE-1; l<SIZE/2 ; l++,r--)
    {
      temp = ar[l];
      ar[l]= ar[r];
      ar[r] = temp;
    }
  for(int i = 0; i<SIZE; i++)
    {
      cout<< ar[i] << "   " ;
    }
  cout<< endl;

  return 0;
}
