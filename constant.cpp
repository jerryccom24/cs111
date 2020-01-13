#include <iostream>
using namespace std;

int main()
{

  const double PI = 3.14;
  int radius = 0;
  double area = 0;  
  double circum = 0;
  
  int age;
  double gpa;
  char gender;
  string  name;
  
  cout <<"Enter your age: ";
  cin >> age;
  cout <<"Enter your gpa: ";
  cin >> gpa;
  cout <<"Enter your gender: ";
  cin >> gender;
  cout <<"Enter your first name: ";
  cin >> name;
  cout << "Enter radius: ";
  cin>> radius;

  area = PI * (radius * radius);
  circum = 2 * (PI * radius);

  cout <<"Hello " << name <<endl;
  cout << "Your age is " << age <<endl;
  cout << "Your gpa is " << gpa <<endl;
  cout << "your gender is " << gender << endl;
  cout << "The area is " << area << endl;
  cout <<"The circumference is " << circum << endl;


 return 0;
}
