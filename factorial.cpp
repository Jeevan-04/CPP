#include <iostream>
using namespace std;

int main()
{
    int num, factorial;
    
    cout<< "Enter a number: ";
    cin>>num;

    factorial=1;

    for (int i = 1; i <= num; ++i)
    {
        factorial= factorial * i;
    }

    cout << "Factorial of "<< num <<" is "<<factorial<< endl;

    
    return 0;
}