//Implement a program to check if a triangle with given sides is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;

int main()
{
    int side_1, side_2, side_3;

    cout<< "Enter the length 1 of triangle: ";
    cin>> side_1;

    cout<< "Enter the length 2 of triangle: ";
    cin>> side_2;

    cout<< "Enter the length 3 of triangle: ";
    cin>> side_3;

    if (side_1 == side_2 && side_2 == side_3 && side_1 == side_3)
    {
        cout<< "The triangle with "<< side_1<< ", "<< side_2 <<" and "<< side_3 << " sides is an equilateral triangle.";
    }
    else if (side_1 == side_2 || side_1 == side_3 || side_2 == side_3)
    {
        cout<< "The triangle with "<< side_1<< ", "<< side_2 <<" and "<< side_3 << "  sides is an isosceles triangle.";
    }
    else
    {
        cout<< "The triangle with "<< side_1<< ", "<< side_2 <<" and "<< side_3 << "  sides is scalene triangle.";
    }
    
    return 0;
}