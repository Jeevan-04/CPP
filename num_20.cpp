//is_prime- bool, return bool. if true do;
#include <iostream>
using namespace std;

bool is_prime(int count, int num)
{

    for (int i = 2; i <= num/2; i++)
    {
        if (num%i == 0)
        {
            count+=1;
        }
    }
    if (count == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    
    if (is_prime(0, a))
    {
       cout<<a <<" is Prime number.";
    }
    else
    {
        cout<< a<<" is not a Prime number.";
    }
    
    return 0;
}