//Create a while loop that prints the Fibonacci sequence up to the 10th term.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the nth term: ";
    cin>> num;

    int arr[num];
    arr[0]=0;
    arr[1]=1;

    int a= 2;

    while (a<=num)
    {
        arr[a]=arr[a-1]+arr[a-2];
        a++;
    }

    int b=0;
    while (b<=num)
    {
        cout<<arr[b]<<" ";
        b++;
    }
    
    return 0;
}
