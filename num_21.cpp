//String Reversal Function: Write a C++ function to reverse a given string without using any library functions.
#include <iostream>
using namespace std;

string reverse(string a)
{
    int len;
    len= a.size();
    string rev;
    for (int i = 0; i < len; i++)
    {
        rev += a[len-1-i];
    }
    return rev;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    cout<<reverse(str)<<endl;

    return 0;
}