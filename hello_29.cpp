//smallest element in an array using a for loop
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

    int min = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"smallest among all is: " << min<<endl;
    
    return 0;
}