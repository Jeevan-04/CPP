//Palindrome Checker Function: Create a C++ function that checks if a given string is a palindrome 
//(reads the same forwards and backwards).
#include <iostream>
using namespace std;

string check(string str)
{
   int len = str.size();
   for (int i = 0; i < len; i++)
   {
      if (str[i] == str[len-1-i])
      {
        cout<<str<< " : is a palindrome.";
        break;
      }
      else
      {
        cout<<str<< " : is not a palindrome.";
        break;
      }
      
   }
   return "";
}

int main()
{
    string a;
    cout<<"Enter the string: ";
    cin>> a;

    check(a);
    return 0;
}