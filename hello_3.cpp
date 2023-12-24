//take three numbers and subtract them

#include <iostream>
using namespace std;

int main()
{
    double num_1, num_2, num_3, subtraction ;

    cout<< "Enter the first Number: ";
    cin>> num_1;

    cout<<"Enter the second Number: ";
    cin>> num_2;

    cout<< "Enter the third number: ";
    cin>> num_3;

    subtraction= num_1 - num_2 - num_3 ;

    cout<<endl<< "Subtraction of "<< num_1 <<", "<<num_2 <<" and "<< num_3<< " is: "<< subtraction<<endl;

    return 0;
}