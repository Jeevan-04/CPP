//leap year.
#include <iostream>
using namespace std;

int years(int y)
{
    if (y%400==0 || y%4 == 0 && y%100 !=0)
    {
        cout<<"The year "<<y<<" is a leap year.";
    }

    else
    {
        cout<<"The year "<<y<<"  is not a leap year.";
    }
    return 0;
}

int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    years(year);

    return 0;
}