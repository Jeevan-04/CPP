#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<< "Enter the value of x: ";
    cin>> x;

    int*c= &x;

    cout<< "c = "<< c << endl;
    cout << "*c = "<< *c << endl;

    cout<< "Enter the value of *c: ";
    cin>> *c;

    cout<< endl<< "*c = "<<*c;
    cout<< endl<< "value of 'x' after change of value in pointer: " << x;


    return 0;

}