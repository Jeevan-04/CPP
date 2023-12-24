//use for loop to display multiples of a number upto 10 of any input number.
#include <iostream>
using namespace std;

int main()
{
    int input;

    cout<< "Enter the number: ";
    cin>> input;

    for (int i = 1; i <= 10; i++)
    {
        cout<< input << "X" << i << "="<< input*i<<endl;
    }
    
    return 0;
}