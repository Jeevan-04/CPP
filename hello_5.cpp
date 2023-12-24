//write a program for given expression a+b+c+d/e*(1/x)*(1/y)*(1/z).

#include<iostream>
using namespace std;

int main()
{
   double a,b,c,d,e,x,y,z,result;

   cout<< "Enter the number 1st: ";
   cin>> a;

   cout<< "Enter the number 2nd: ";
   cin>> b;

   cout<< "Enter the number 3rd: ";
   cin>> c;

   cout<< "Enter the number 4th: ";
   cin>> d;

   cout<< "Enter the number 5th: ";
   cin>> e;
   
   cout<< "Enter the number 6th: ";
   cin>> x;

   cout<< "Enter the number 7th: ";
   cin>> y;

   cout<< "Enter the number 8th: ";
   cin>> z;

   result = a+b+c+d/e*(1/x)*(1/y)*(1/z);

   cout<<"Result: "<<result;

   return 0;
}