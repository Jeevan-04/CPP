#include <iostream>
using namespace std;

class Shape
{
    public:
     int width;
     int height;
     int base;
     
     void setwidth(int w)
      { width = w;}
     void setheight(int h)
      {
        height = h;
      }
     void setbase (int b)
      {
        base = b;
      }
};

class Rectangle: public Shape
{
    public:
      int getArea()
       {
        return (width*height);
       }
};

class Triangle: public Shape
{
    public:
     int getAreaa()
    {return (0.5 * base * height);}
};

int main()
{
    Rectangle Rect;

    Rect.setwidth(5);

    Rect.setheight(7);

    cout<<"Total Area: "<<Rect.getArea()<<endl;

    Triangle Tri;

    Tri.setbase(10);

    Tri.setheight(5);

    cout<< "Total Area: "<<Tri.getAreaa()<<endl;

    return 0;
}