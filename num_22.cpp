//Factorial Function: Implement a C++ function to compute the factorial of a non-negative integer using recursion.
#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}

int main()
{
    int n;
    here:
    cout<<"Enter the number: ";
    cin>> n;

    if (n <0)
    {
        cout<<"Enter a valid number"<<endl;
        goto here;
    }


    cout<<"Factorial of number "<< n <<" is: "<<  fact(n)<<endl;

    return 0;
}