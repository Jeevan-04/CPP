//check if number is prime or not
#include <iostream>
using namespace std;

int main()
{
   int num;

   cout<< "Enter the number: ";
   cin>> num;

   int flag;

   if (num == 1)
   {
    cout<<"The number "<< num << " is neither prime nor composite" ;
   }
   else if (num == 2 )
   {
    cout<<"The number "<< num << " is only even prime number" ;
   }
   else 
   {
        for (int i = 2; i <= num/2; i++)
        {
        if (num % i == 0)
        {
            flag += flag ;
        }
        }
        if (flag >0)
        {
            cout<< "The number is not a prime number";
        }
        else
        {
            cout<< "The number is a prime number";
        }
        
   }
   
    return 0;
}