//prime numbers
#include <iostream>
using namespace std;

int prime(int num)
{
    int count;
    for (int i = 2; i <=num; i++)
    {
        count=0;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
            {
                count++;
            }

        }
        if (count == 0)
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}


int main()
{
    int a;
    cout<<"Enter nth number: ";
    cin>> a;
    prime(a);
    return 0;
}