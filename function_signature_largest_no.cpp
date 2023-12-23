#include<iostream>
using namespace std;

int largest_num(int p, int q, int r) 
{
    int s;
    s= max(p , max(q, r));
    return s;
}

int main()
{
    int a,b,c,maximum_num;
    cout<< "Enter the value of a: ";
    cin>> a;

    cout<< "Enter the value of b: ";
    cin>> b;
    
    cout<< "Enter the value of c: ";
    cin>> c;

    maximum_num=largest_num(a,b,c); //function call
    cout<< "Largest number of all is: "<<maximum_num <<".";


    return 0;
}