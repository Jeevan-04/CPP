//prime
#include <iostream>
using namespace std;

int main()
{
    int count, j=1;

    for (int i = 2; i <= 10000; i++)
    {
        count=0;
        for (int a = 2; a <= i/2; a++)
        {
            if (i%a==0)
            {
                count += 1;
            }
        }
        if (count == 0)
        {
            cout<<"("<<j++<<")"<<i<<endl;
        }
    }
    return 0;
}