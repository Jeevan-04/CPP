/*Create a C++ program that implements a basic calculator. Use a class
Calculator with methods to perform addition, subtraction, multiplication,
and division of two numbers. The program should allow the user to input
two numbers and select an operation to perform*/

#include <iostream>
using namespace std;

class calculator
{
   private:
    double num1, num2, sum,sub, mult, div;

   public:
    void input()
     {
       cout<<"Enter the first number: ";
       cin>>num1;
       cout<<"Enter the second number: ";
       cin>> num2;
     }
    double addition()
     {
        sum=num1 +num2;
        return sum;
     }
    double subtraction()
     {
        sub=num1-num2;
        return sub;
     }
    double multiplication()
     {
        mult = num1*num2;
        return mult;
     }
    double division()
     {
        div= num1/num2;
        return div;
     }
};  

int main()
{
    calculator calculate;
    calculate.input();

    char a;
    cout<<"Enter the choice of operation(+, -, *, /): ";
    cin>>a;

    if (a == '+')
    {
        cout<< calculate.addition();
    }
    else if (a == '-')
    {
        cout<< calculate.subtraction();
    }
    else if (a =='*')
    {
        cout<<calculate.multiplication();
    }
    else
    {
        cout<<calculate.division();
    }
    
    return 0;
}