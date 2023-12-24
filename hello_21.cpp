//to calculate the sum of numbers which are divisible either 3 or 5 between 1 to n;
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum= 0;

    for (int i = 1; i <= num ; i++)
    {
        if (i%3==0 || i%5==0)
        {
            sum += i;
        }
        
    }
    cout<<"The sum of all numbers between 1 and "<< num << " which are divisible by either 3 or 5 is: " <<sum<<endl;
    
    return 0;
}