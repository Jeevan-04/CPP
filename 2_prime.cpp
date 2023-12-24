//Implement a program to check if a given number is prime or not.
//Write a C++ program to check if a number is prime or composite.
#include <iostream>
using namespace std;

int main()
{
    start:
        int num;
        cout<< "Enter the number you wanna check for ( 0 to exit): ";
        cin>> num;

        while (true)
        {
            if (num==1)
            {
                cout<< num << " is neither prime nor composite.";
                break;
            }
            else if (num == 2)
            {
                cout<< num << " is only  even prime number.";
                break;
            }
            else if (num < 0)
            {
                cout<< "Enter a positive number .";
                break;
            }
            
            else if (num == 0)
            {
                cout<< "Thank you";
                break;
            }
            else
            {
              

                for (int i = 2; i <num; i++)
                {
                    if (num%i == 0)
                    {
                        cout<< num << " is not a prime number"<<endl;
                        break;
                    }else
                    {
                        cout<< num << " is a prime number"<<endl;
                        break;
                    }
                    break;
                }
                
            }
            goto start;
        }
        
    
    return 0;
}