//adding numbers
#include <iostream>
using namespace std;

int main()
{
    double num_1, num_2,sum;

    cout<<"Enter the first number: ";
    cin>> num_1;

    cout<< "Enter the second number: ";
    cin>> num_2;

    sum = num_1 + num_2 ;

    cout<< "The addition of "<< num_1 <<" and "<< num_2 << " is: "<< sum <<endl;

    return 0;
}