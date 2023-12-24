#include <iostream>
using namespace std;

void add(int *n);
int main()
{
    int num=2;
    cout<<num<<endl;
    add(&num);
    cout<<"value of num: "<< num<<endl;
    cout<<"address of num: "<<&num<<endl;
}

void add(int *n)
{
    *n=*n+10;
    cout<<"address of n: "<< &n<<endl;
    cout<<"address of num in n: "<< n<<endl;
    cout<<"value of num in th adress of n: "<<*n<<endl;
}