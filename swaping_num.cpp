// swaping numbers using call by value, call by reference and call by address/ pointer.

#include<iostream>
using namespace std;

int swap(int a, int b)
{
    cin>> a>>b >>endl;
}

int main()
{
    int p,q,r;

    cout<< "Enter the value for 'p': ";
    cin>>q;

    cout<< "Enter the value of 'q': ";
    cin>>p;

    r= swap(p,r);
    cout<< r;

    return 0;
}