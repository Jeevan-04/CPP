#include <iostream>
using namespace std;

// void print (string m)
// {
//     cout<<"Message is: "<< m;
//     return ;
// }
     //without return
     
     
     
    //with return

string print (string m) ; 

int main()
{
    string a;
    a= "Hello";
    print (a);

    return 0;
}

string print (string m)
{
    cout<<"Message is: "<< m;
    return m;
}