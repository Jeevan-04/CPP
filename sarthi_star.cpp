#include <iostream>
using namespace std;

int main()
{
    int a=1;
    for (int i = 0; i <=5; i++)
    {

        for (int j = 1; j <=i; j++)
        {
           if (i == j)
           {
             cout<< i;
           }
           else 
           {
            cout<< "*";
           }
           
        }
        cout<<endl;
    }
    return 0;
}