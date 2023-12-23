#include <iostream>
using namespace std;

void add(int x, int y) //fuction signature
{
    cout <<"Addition is: "<<x+y;
}

int main()
{
    int a,b;
    cout << "Enter the value of a:"<<endl;
    cin>> a;

    cout << "Enter the value of b: "<<endl;
    cin>> b;

    add(a,b);

    return 0;

}