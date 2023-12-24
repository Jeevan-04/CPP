//to determine largest among three
#include<iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;

    cout<< "Enter the first number: ";
    cin>> num_1;

    cout<< "Enter the second number: ";
    cin>> num_2;

    cout<<"Enter the third number: ";
    cin>>num_3;

    if (num_1 > num_2 && num_1 > num_3)
    {
        cout<< num_1 << " is greater than "<< num_2 << " and "<<num_3<<endl;
    }
    else if (num_2 > num_1 && num_2 > num_3)
    {
        cout<< num_2 << " is greater than "<< num_1 << " and "<<num_3<<endl;
    }
    else
    {
        cout<< num_3 << " is greater than "<< num_1 << " and "<<num_2<<endl;
    }
    

    return 0;
}