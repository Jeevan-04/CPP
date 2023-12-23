//power of number.
#include <iostream>
using namespace std;

int num(int base_num, int power_num)
{
    int number = 1;
    for (int i = 1; i <= power_num; i++)
    {
        number*=base_num ;
    }
    cout<< number;
    return 0;
}

int main()
{
    int base,power;
    cout<<"Enter the base number: ";
    cin>> base;
    cout<<"Enter the power of  number: ";
    cin>> power;

    num(base,power);

    return 0;
}