#include <iostream>
using namespace std;

int main()
{
    double a,b;
    
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    //addition
    double add=a+b;
    cout<< "addition is: "<<add<<endl;

    //subtraction
    double subtract=a-b;
    cout<< "Subtraction is: "<<subtract<<endl;

    //multiplication
    double multiply=a*b;
    cout<< "Multiplication is: "<<multiply<<endl;

    //division
    double divide=a/b;
    cout<<"Division is: "<<divide<<endl;

    //modulus
    int mod=int(a)%int(b);
    cout<<"Modulus is: "<<mod<<endl;

    //increment
    cout<<"Increment of a is: "<< ++a <<endl;
    cout<<"Increment of b is: "<< ++b <<endl;

    //decrement
    cout<<"Decrement of a is: "<< --a <<endl;
    cout<<"Decrement of b is: "<< --b <<endl;

    return 0;
}