//Function Overloading: Define overloaded functions in C++ to calculate the area of various geometric shapes
// (e.g., circle, rectangle, triangle) based on user input.
#include <iostream>
using namespace std;

int area(double rad)
{
    const double pi= 3.14;
    double area = pi * rad * rad;
    return area;
}

int area(double length, double breadth)
{
    double area= length * breadth;
    return area;
}

int area_tri(double base, double height)
{
    double area = 0.5 * base * height;
    return area;
}


int main()
{
    int in;
    here:
    cout<<"Area of"<<endl<<"(1)circle,"<<endl<<"(2)rectangle,"<<endl<<"(3)triangle: "<<endl;
    cin>>in;
    
    switch (in)
    {
    case 1:
        int r;
        cout<<"Enter the radius: ";
        cin>>r;
        cout<< area(r)<<endl;
        break;

    case 2:
        int l,b;
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>> b;
        cout<< area(l,b)<<endl;
        break;
    
    case 3:
        int c,h;
        cout<<"Enter base: ";
        cin>>c;
        cout<<"Enter height: ";
        cin>> l;
        cout<< area_tri(c,l)<<endl;
        break;
    
    default:
        cout<<"Enter valid input.";
        goto here;
        break;
    }
    return 0;
}