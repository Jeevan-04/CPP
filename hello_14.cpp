//simple calculator, two inputs and which operators to use
#include <iostream>
using namespace std;

int main()
{
    double num_1, num_2;
    char a;

    cout<< "Enter first number: ";
    cin>> num_1;

    cout<< "Enter second number: ";
    cin>> num_2;

    cout<<"Enter the operand: ";
    cin>> a;

    if (a == '+')
    {
        cout<< num_1 + num_2 ;
    }
    else if (a == '-')
    {
        cout<< num_1 - num_2 ;
    }
    else if (a == '*')
    {
        cout<< num_1 * num_2 ;
    }
    else if (a == '/')
    {
        cout<< num_1 / num_2 ;
    }
    else if (a == '%')
    {
        cout<< int(num_1) % int(num_2) ;
    }
    
    
    return 0;
}