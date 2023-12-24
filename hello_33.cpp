//print ascii values of uppercase alphabets using for loop
#include <iostream>
using namespace std;

int main()
{
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for (int a = 0; a < 26; a++)
    {
        cout<< arr[a]<<"-"<<(int)arr[a]<<endl;
    }
    
    

    return 0;
}