#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"Function 1 is called"<<endl;
    cout<<"Addition is: "<<a+b<<endl<<endl;
}

void add(int a, int b, int c)
{
    cout<<"Function 2 is called"<<endl;
    cout<<"Addition is: "<<a+b+c<<endl<<endl;
}

void add(double a, int b, int c)
{
    cout<<"Function 3 is called"<<endl;
    cout<<"Addition is: "<<a+b+c<<endl<<endl;
}

int main()
{
    int a,b,c;
    double d;

    cout<< "Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    cout<< "Enter the value of c: ";
    cin>>c;

    cout<<"Enter the value of d: ";
    cin>>d;

    add(a,b);

    add(a,b,c);
    

    add(d,b,c);

    return 0;
}