//Write a while loop that checks if a number is prime.
#include <iostream>
using namespace std;

int main()
{
    int num, count;
    cout<<"Enter the number: ";
    cin>>num;

    
    while (true)
    {
        if (num == 1)
        {
            cout<<"The number 1 is neither prime nor composite.";
            break;
        }
        else if (num == 2)
        {
            cout<<"The number 2 is only even prime number.";
            break;
        }
        else if (num == 0)
        {
            cout<<"Thank you!!";
            break;
        }
        
        else
        {
            count=0;
            for (int i = 2; i < num; i++)
            {
               for (int a = 2; a < num/2; a++)
               {
                count+=1;
               }
            }
            if (count == 0)
            {
                cout<<"Entered number "<< num << " is a prime number.";
                break;
            }
            else
            {
                cout<<"Entered number "<< num << " is not a prime number.";
                break;
            }
            

        }
    }

    return 0;
}