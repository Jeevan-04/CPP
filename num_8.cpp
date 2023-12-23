//Use a while loop to reverse a given string.
#include <iostream>
using namespace std;

int main()
{
    string input;
    cout<<"Enter the string: ";
    cin>>input;

    int len = input.size();
    //cout<<len;

    int i=0;

    string rev;

    while (i<len)
    {
        rev +=input[len-1-i];
        i++;
    }
    
    
    cout<<rev<<endl;
    
    return 0;
}