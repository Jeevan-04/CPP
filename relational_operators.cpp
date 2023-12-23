#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout<<"Enter the value of 'a': ";
    cin>> a;

    c=10;

    int sum = a+c;
    cout<< sum<< endl;

    cout<< (c+=a)<< endl;

    cout<< (c-=a)<< endl;

    cout << (c*=a)<< endl;

    cout << (c/=a)<< endl;

    cout << (c%=a)<< endl;

    cout << (c<= a)<< endl;

    cout << (c >=a)<< endl;

    cout << (c&= a)<< endl;

    cout << (c^= a)<< endl;

    cout<< (c|=a)<< endl;


  return 0;
}