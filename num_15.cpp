//create a do-while loop to print prime numbers between 1 to n;
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the nth term: ";
    cin>>num;
    int count;
    int i=2,j=2;


         do
         {
            count = 0;
            j = 2;
            j++;
            i++;
            if (i%j == 0)
            {
                count+=1;
            }
            cout<< count;
            
            if(i == 2)
            {
                break;
            }
            if (count == 0)
            {
            cout<<i<<" ";
            }
         } while (i <= num && j<=i/2);
    
    return 0;
}