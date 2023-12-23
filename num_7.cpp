//Write a while loop to find the largest element in an array.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];

    int x = 0;
    while (x< size)
    {
        cout<<"Enter the element "<<x+1<<": "<<endl;
        cin>> arr[x];
        x++;
    }
    
    int a=1;
    int max = arr[0];

    while (a<size)
    {
        if (max < arr[a])
        {
            max = arr[a];
        }

        a++;

    }

    cout<< max;
    
    return 0;
}