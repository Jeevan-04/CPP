//reverse of a given number using loop
#include <iostream>
using namespace std;

int main()
{
    string num;
    cout<<"Enter the number: ";
    cin >> num;

    int length = num.length();

    string rev;
    
   for (int i = 0; i <= length; i++)
   {
     rev[i] = num[length-i];
   }
   
   for (int a = 0; a <= length; a++)
   {
    cout<< rev[a];
   }

    return 0;
}