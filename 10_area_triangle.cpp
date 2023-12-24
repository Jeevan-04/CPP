//Implement a program to calculate the area of a triangle given its base and height.
#include <iostream>
using namespace std;

int main()
{
    double base, height, area ;

    cout <<"Enter the length of the base: ";
    cin>> base;

    cout<< "Enter the height: ";
    cin>> height;

    area = 0.5 *height * height;

    cout <<"Area of triangle with base "<<base <<" and height "<<height << " is "<< area ;

    return 0;
}