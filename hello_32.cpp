//fibonacci series
#include <iostream>
using namespace std;

int main()
{
    int input;
    cout<<"Enter the nth term: ";
    cin>>input;
    
    int num[100]={};
    num[0]=0;
    num[1]=1;

    for (int i = 2; i <= input; i++)
    {
        num[i] = num[i-1] + num[i-2];
    }
    
    for (int a = 0; a <= input; a++)
    {
        cout<< num[a]<< " ";
    }
    
    return 0;
}