//basic program to take input number ,odd or even.
#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    if (num%2==0)
    {
        cout<< "The entered number "<< num <<" is even"<<endl;
    }
    else{
        cout<< "The entered number "<< num <<" is odd"<<endl;
    }
    
    return 0;
}