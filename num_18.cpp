//write a function in cpp to take two input numbers and perform addition.
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    
    int sum= a + b;
    cout<<"sum of "<< a << " and " << b <<" is: "<< sum;

    return 0;
}

int main()
{
    int x, y;
    cout<<"Enter the number 1: ";
    cin>> x;
    cout<<"Enter the number 2: ";
    cin>> y;
    addition(x,y);
    return 0;
}