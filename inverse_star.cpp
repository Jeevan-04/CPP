#include <iostream>
using namespace std;

int main()
{
    int a=1;
    for (int i = 6; i >=1; i--)
    {

        for (int j = 6; j >=1; j--)
        {
           if (i == j)
           {
             cout<< a++;
           }
           else 
           {
            cout<< "•";
           }
           
        }
        cout<<endl;
    }
    return 0;
}