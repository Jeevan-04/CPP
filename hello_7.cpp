//check if year is leap year or not.
#include <iostream>
using namespace std;

int main()
{
    int year;

    cout<< "Year: ";
    cin>> year;


    //if (year%100 != 0 || year %4 == 0)
    if (year%4==0 && year%100 !=0)
    {
        cout<< "Year "<<year << " is a Leap year.";
    }
    else
    {
        cout<< "Year "<<year << " is a not Leap year.";
    }
    
    return 0;
}