//write a program to compute the area of triangle and circle by overloading the area function.

#include <iostream>   //header file
using namespace std;

double tri_area(double base, double height)  // function signature for case-1 to find area of triangle
{
    double x;
    x= 0.5*base * height;
    return x; 
}


double circle(double radius)   // function signature for case-2 to find area of circle
{
    double y;
    y= 3.14* radius* radius;
    return y;
}

int main()  // here is where our actual code for execution starts
{
    int z;  // a variable declared to get an input for the choice by the user, wheather need area of circle or triangle
    cout<< "which area do you want measure of (Triangle-1 / Circle-2): ";
    cin>>z;

    int area =z;
    switch (area)
    {
        case 1:  //Area of triangle
          double a,b,triarea;
        
          cout<< "Enter the measurement for base: ";
          cin>>a;
        
          cout<<"Enter the measurement for height: ";
          cin>>b;

          triarea = tri_area(a,b);
          cout<<"Area of triangle is "<< triarea <<"."<<endl;

          break;
        
        case 2: //Area of Circle
          double p,cir_area;

          cout<< "Enter the measurement for radius: ";
          cin>>p;

          cir_area= circle(p);
          cout<<"Area of circle is "<< cir_area<< "."<<endl;

          break;
    }
    return 0;
}