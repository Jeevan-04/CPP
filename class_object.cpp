#include <iostream>
using namespace std;

class Demo // define a class
{
    private:
    int data; //class data

    public:
    void setdata(int d) //member function to set data
    {
        data = d;
    }
    void showdata() //member function to display data
    {
        cout<<"Data is "<<data<<endl;
    }
};

int main()
{
    Demo s1,s2; //Define two objects of class Demo
    s1.setdata(10);  //call member function to set data
    s2.setdata(15);
    s1.showdata(); // call member function to display data
    s2.showdata();

    return 0;
}