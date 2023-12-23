#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"Enter the value of c: ";
    cin>>c;

    if (a>b && a>c)
    {
        cout<< a <<" is the largest among three.";
    }
    else if (b>a && b>c)
    {
        cout<< b <<" is the largest among three.";
    }
    else
    {
        cout<< c << " is the largest among three.";
    }


    return 0;
    
}