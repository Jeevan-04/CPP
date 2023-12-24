//prime
#include <iostream>
using namespace std;

int main()
{
    int j=1,count=0,n;

    cout<<"Enter the number: ";
    cin>>n;
    
    for (int i = 2; i <= n; i++)
    {
        count=0;

        for (int a = 2; a <= i/2; a++)
        {
            if (i % a == 0)
            {
                count ++;
            }
            
        }
        if (count == 0)
        {
            cout<<"("<< j++ << ") "<<  i <<endl;
        }
    }
    return 0;
}