#include<iostream>
using namespace std;

int add(int p, int q, int r) //inline add(int p, int q, int r) // will also work but here the code is in the line of main code in the place of sum=(a+b+c); in the backend.
{
    int s;
    s= p+q+r;
    return s;
}

int main()
{
    int a,b,c,sum;
    cout<< "Enter the value of a: ";
    cin>> a;

    cout<< "Enter the value of b: ";
    cin>> b;
    
    cout<< "Enter the value of c: ";
    cin>> c;

    sum=add(a,b,c); //function call
    cout<< "Addition is: "<<sum <<".";


    return 0;
}