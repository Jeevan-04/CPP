#include <iostream>
using namespace std;

int main()
{
    int num[100]={0};
    num[0]= 0;
    num[1]=1;

    int a;
    cout<< "Enter the n'th term till where the fibonacci you need: ";
    cin>>a;

    for (int i = 2; i <= a; i++)
    {
        num[i] = num[i-1] + num [i-2] ;
    }
    cout<< "The fibonacci series upto "<< a <<" term are: "<<endl;


    for (int j = 0; j <=a; j++)
    {
        cout<< num[j]<<" ";
    }
    return 0;
}