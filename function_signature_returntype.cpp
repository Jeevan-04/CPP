#include <iostream>
using namespace std;

int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a,b,sum;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    sum=add(a,b);
    cout<< sum;

    return 0;

}