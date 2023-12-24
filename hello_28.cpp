//to find largest element in array using for loop
#include <iostream>
using namespace std;

int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
       cout<< "Enter the elements of the arrar "<< i+1 <<": ";
       cin>>arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"Largest among all is: " << max<<endl;
    
    return 0;
}