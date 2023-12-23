#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter a number";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << endl <<"the given number " <<number << " is even";
    }else {
        cout << endl << "the given number " << number << " is odd";
    }
    
    return 0;
}