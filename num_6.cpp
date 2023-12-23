//Implement a while loop that calculates the factorial of a given number.
#include <iostream>
using namespace std;

int main()
{
    int fact=1;
    int num;

    here:
    cout<<"Enter the number: ";
    cin>>num;

    if (num< 0)
    {
        cout<<"Enter the positive number"<<endl;
        goto here;
    }
    

    int i=1;

    while (i<=num)
    {
        fact *=i;
        i++;
    }
    cout<< fact<<endl;
    
    return 0;
}