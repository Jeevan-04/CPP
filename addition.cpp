#include <iostream>
using namespace std;

int main()
// {
//     int a,b,sum;

//     std::cout<< "Enter the value of a: " <<std::endl;
//     std::cin>> a;
//     std::cout << "Enter the value of b: " <<std::endl;
//     std::cin>> b;

//     sum=a+b;
//     std::cout << "Sum of "<< a << " & " << b << " is " << sum;

//     return 0;
    
//     }
// int main()
// {
//     char my_num[100];
    

//     cout <<"enter  your name "<<endl;
//     cin>>my_num;
//     cout<<"your name is :-"<<my_num<<endl;

//     return 0;
// }

{
    float a, b,  c, d, e, f;
    int g;

    cout << "Enter value of a: " << endl;
    cin >> a;
    cout << "Enter value of b: " << endl;
    cin >> b;

    cout << "what operation do you want to perfom ?(+,-,/,*,%)";
    

    c = a + b; // Addition
    cout << "addition of a and b is " << c << endl;

    d = a - b; // Subtraction
    cout << "subtraction of a and b is " << d << endl;

    e = a * b; // Multiplication
    cout << "multiplication of a and b is " << e << endl;

    f = a / b; // Division
    cout << "division of a and b is " << f << endl;

    g = int(a) % int(b); // Modulus
    cout << "mod of a and b is " << g << endl;


    return 0;

}