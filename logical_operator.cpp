#include <iostream>
using namespace std;

int main()
{
    int a, b,c;

    a=50;
    b=2;

    if (a&&b)
    {
        cout<< "1-condition is true"<<endl;
    }
    if (a||b)
    {
        cout<<"2-condition is true"<<endl;
    }

    a=4;
    a=60;

    if (a&&b)
    {
        cout<< "3-condition is true"<<endl;
    }else
    {
        cout<<"4-condition is true";
    }
    if(!(a&&b))
    {
        cout<< "5-condition is true"<<endl;
    }
    return 0;

}