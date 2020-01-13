/********************************************************
Jerry Compton
CS111
Assignment #5
3/30/17

This program calculates the total cost, discount, and tax and
outputs a reciept for a customer. This program uses functions to perform each
task that are called within the main. A user will enter their information
and then the prices and weight of each product and then a receipt
is outputted.
********************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

//PROTOTYPES
void getCustomerInfo(int & acct, int & date1, int & date2, int & date3, char & county);
void getItemsInfo(double & totalPrice, int & totalWeight);
double calcDiscount(int date1, double totalPrice);
double calcSalesTax(char county, double totalPrice,double disAmount);
double calcShipping(int totalWeight);
void outputInvoice(int acct,char county,int date1,int date2, int date3, double totalPrice,double disAmount,double salesTaxAmnt, double shipping);
//PROTOTYPES

int main()
{
  int acct;//account number
  int date1;//month
  int date2;//day
  int date3;//year
  char county;//county code
  double totalPrice=0;//total sale price
  int totalWeight=0;//total weight
  double salesTaxAmnt;//amount of sales tax
  double disAmount;//amount of discount
  double shipping;//amount of shipping

  getCustomerInfo(acct,date1,date2,date3,county);
  getItemsInfo(totalPrice,totalWeight);
  disAmount =  calcDiscount(date1,totalPrice);
  salesTaxAmnt = calcSalesTax(county,totalPrice,disAmount);
  shipping = calcShipping(totalWeight);
  
  outputInvoice(acct,county,date1,date2,date3,totalPrice,disAmount,salesTaxAmnt,shipping);
  return 0;
}
//Get Customers information
void getCustomerInfo(int & acct, int & date1, int & date2, int & date3, char & county)
{
  cout<<"Enter Account Number: ";
  cin>> acct;
  cout<<"Enter month: ";
  cin>> date1;
  cout<<"Enter day: ";
  cin>>date2;
  cout<<"Enter year: ";
  cin>>date3;
  cout<<"Enter County Code: " ;
  cin>> county;
}
//Get items information
void getItemsInfo(double & totalPrice, int & totalWeight)
{
  char choice;//Yes or No
  double p= 0;//price
  int w= 0;//weight
  cout<<endl;
  cout<<"Do you want to order an item? Enter Y or N: ";
  cin>>choice;

  while(choice == 'Y')//while they answer yes
    {
      cout<<"   Enter a price: ";
      cin>>p;
      totalPrice = p + totalPrice;//add prices together

      cout<<"   Enter a weight: ";
      cin>>w;
      totalWeight = w + totalWeight;//add weights together

      cout<< endl;
      cout<<"Do you want to order an item? Enter Y or N: ";
      cin>>choice;
    }
}
//Calculate discount
double calcDiscount(int date1, double totalPrice)
{
  double discount;//discount 
  double disAmount;//dollar amount of discount

  if(date1 >= 1 && date1 <=5)//january - may
    discount = .05;
  else if(date1 >= 6 && date1 <=8)//june - august
    discount = .1;
  else //september - december
    discount = .15;

  disAmount = discount * (double)totalPrice;

  return disAmount;
}
//Calculate sales tax
double calcSalesTax(char county, double totalPrice,double disAmount)
{
  double salesTax;//sales tax
  double salesTaxAmnt;//dollar amount of sales tax

  if(county == 'S')//san diego
    salesTax = .0775;
  else if(county == 'O')//orange county
    salesTax = .0775;
  else if(county == 'L')//Los Angeles
    salesTax = .0825;

  totalPrice = totalPrice - disAmount;
  salesTaxAmnt = salesTax * (double)totalPrice;
 
  return salesTaxAmnt;
}
//Calculate shipping
double calcShipping(int totalWeight)
{
  double shipping;//shipping price
  double diffWeight;//difference in weight
  double overageW;//amount over base rate

  if(totalWeight <= 25)//0-25 pounds
    shipping = 5;
  else if(totalWeight >= 26 && totalWeight <= 50)//26-50 pounds
    {
      diffWeight = totalWeight - 25;
      overageW = diffWeight * .10;
      shipping =(double)overageW + 5;//calculate shipping
    }
  else if(totalWeight > 50)//over 50 pounds
    {
      diffWeight= totalWeight - 50;
      overageW = diffWeight * .07;
      shipping = 5 + (25 * .10)+ overageW;//calculate shipping
    }
      return shipping;    
}
//Invoice OutPut
void outputInvoice(int acct,char county,int date1,int date2, int date3, double totalPrice,double disAmount,double salesTaxAmnt, double shipping)
{
  string newCounty;

  if(county == 'S')
    newCounty = "San Diego";
  else if(county == 'O')
    newCounty = "Orange County";
  else if(county == 'L')
    newCounty = "Los Angeles";


  cout<<endl;
  cout<< left<<setw(20)<<"ACCOUNT NUMBER" << right << setw(10)<<"COUNTY"<<endl;
  cout<< left<<setw(20)<<acct<< right<<setw(10)<<newCounty<< endl;
  cout<< endl;
  cout<<left<<setw(12)<<"DATE OF SALE "<<date1<<"/"<<date2<<"/"<<date3<<endl;
  cout<<endl;
  cout<<left<<setw(20)<<"TOTAL SALE AMOUNT:  $"<<right<<setw(8) <<fixed<<setprecision(2)<<totalPrice<<endl;
  cout<<left<<setw(20)<<"DISCOUNT:           $"<<right<<setw(8) <<fixed<<setprecision(2)<<disAmount<< endl;
  cout<<left<<setw(20)<<"SALES TAX:          $"<<right<<setw(8) <<fixed<<setprecision(2)<<salesTaxAmnt<< endl;
  cout<<left<<setw(20)<<"SHIPPING:           $"<<right<<setw(8) <<fixed<<setprecision(2)<<shipping<<endl;
  cout<<left<<setw(20)<<"TOTAL DUE:          $"<<right<<setw(8) <<fixed<<setprecision(2)<< (totalPrice - disAmount)+salesTaxAmnt+shipping<< endl;
  cout<< endl;
}



