//take number from user check if its negative positive or zero.
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<< "Enter the number: ";
    cin>> num;

    if (num > 0)
    {
        cout<< "The entered number "<<num << " is a POSITIVE number.";
    }
    else if (num < 0)
    {
        cout<< "The entered number "<<num << " is a NEGATIVE number." ;
    }
    else
    {
        cout<< "The entered number "<<num << " is  ZERO." ;
    }
    return 0;
}