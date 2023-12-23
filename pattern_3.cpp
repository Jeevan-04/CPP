#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of 'n' for pattern: ";
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int j =0 ; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int a = n-1; a > 0; a--)
    {
        for (int b = a; b > 0; b--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}