//Create a while loop that asks the user for a password until they enter the correct one.
#include <iostream>
using namespace std;

int main()
{
    int password;
    password = 12340987;
    
    here:
    cout<< "Enter the password: ";
    cin>>password;

    while (password != 12340987)
    {
        cout<<"Enter the correct password."<<endl;
        goto here;
    }
    
    cout<< "Correct Password !!"<<endl;
    return 0;
}