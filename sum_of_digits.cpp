#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the number: ";
   cin>> n;
   int a=0;
   int sum=0;

  do
  {
    int last_digit = n%10;
    sum += last_digit;
    n/=10;
  } while (n != 0);

   cout<<sum;
   return 0;
}