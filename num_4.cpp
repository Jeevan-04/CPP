//To using while loop sum of 0 to n numbers
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<< "nth term: ";
    cin>> num;

    int i=1;
    int sum=0 ;
    while (i <= num)
    {
        sum +=i;
        i++;
    }
    cout<<sum<<endl;
    
    return 0;
}