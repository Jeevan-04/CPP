//1 to n , prime number, sum
#include<iostream>
using namespace std;

int main()
{
    int num, sum=0, count =0;
    cout<< "Enter the number: ";
    cin>> num;
    
    for (int i = 2; i <= num; i++)
    {
        int count=0;
        for (int a = 2; a <= i/2; a++)
        {
            if (i%a == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            sum += i;
        }
        
    }
    cout<<sum;
    return 0;
}