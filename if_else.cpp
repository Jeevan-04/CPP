#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<< "Enter the value of a: ";
    cin>> a;

    if (a>0)
    {
        cout<< "The number entered is positive.";
    } 
    else if (a< 0)
    {
        cout<< "The number entered is negative.";
    }
    else
    {
        cout <<"The number entered is zero";
    }

}