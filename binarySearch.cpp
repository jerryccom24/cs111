#include <iostream>
using namespace std;

int binarySearch(const int a[], int s, int key);

int main()
{
  const int SIZE = 10;
  int ar[SIZE] = {1, 10, 20, 30, 40, 50, 60, 70, 80, 90};
  int key;

  cout << "Enter key: ";
  cin >> key;


  cout << key << " was found at " << binarySearch(ar,SIZE,key) << endl; 

  return 0;
}

//This function returns the index where key is found or -1 if key is not found.
//s is the size of the array.
//key is the number being searched for.
int binarySearch(const int a[], int s, int key)
{
  int l = 0; //left boudary starts at first index
  int r = 9; //right boundary starts at last index
  int m; //middle point between left and right.

  //When l and r cross over, search ends. --> key was not found. 
  while(l <= r )
    {
      //calculate the middle point between l and r
      m = (l + r)/2;

      if(a[m] == key) //key was found
	return m;
      else if(a[m] < key)
	l = m+1;
      else if(a[m] > key)
	r = m-1;
    }
  
  return -1; //key wasn't found
}
