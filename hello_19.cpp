//to calculate the sum of all even number between 1 to n.
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum =0;

    for (int i = 2; i <= num; i++)
    {
       if (i % 2 == 0)
       {
        sum+=i;
       }
    }
    cout<<"The sum of all even numbers between 1 and "<< num<< " is: "<< sum <<endl<<endl;

    return 0;
}