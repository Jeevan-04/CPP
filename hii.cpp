#include <iostream>
using namespace std;

int main()
{
    int a=1;
    for (int i = 0; i <=5; i++)
    {

        for (int j = 1; j <=i; j++)
        {
           if (i == j || i==5)
           {
             cout<< "*";
           }
           else 
           {
            cout<< " ";
           }
           
        }
        cout<<endl;
    }
    for (int i = 5; i >=1; i--)
    {

        for (int j = 1; j <=i; j++)
        {
           if (i == j)
           {
             cout<< "*";
           }
           else 
           {
            cout<< " ";
           }
           
        }
        cout<<endl;
    }
    return 0;
}