//to calculate the average of all the given numbers in an array;
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the size of the array: ";
    cin>> a;
    
    int sum=0;
    
    int num[a];

    for (int i = 0; i <a; i++)
    {
       cout<< "Enter the number " << i+1 << ": ";
       cin>> num[i];
    }
    
    for (int j = 0; j < a;j++)
    {
        sum += num[j];
    }
    cout<<endl<<"sum of all numbers: "<< sum<<endl;

    cout<<endl<<"average: "<< sum/a<<endl;
    
    return 0;
}