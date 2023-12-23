//implement while loop to calculate the average of the number by the user unless and untill the input number is zero.
#include <iostream>
using namespace std;

int main()
{
    double sum =0.0;
    double num = 1.0;
    int a=0;
    double avg;

    while (num !=0)
    {
        cout<<"Enter the number: ";
        cin>> num;
        a++;

        sum += num;
    }

    cout<<"sum is: "<<sum<<endl;
    //cout<<a-1;

    avg=sum/(a-1);

    cout<<"Average is: "<<avg<<endl;
    
    
    
    return 0;
}