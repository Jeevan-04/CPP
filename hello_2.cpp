//program to take name as input and print it
#include <iostream>
using namespace std;

int main()
{
    string name;

    cout<< "Enter your full Name: ";
    getline(cin,name);

    cout<<endl<< name<<endl;

    return 0;
}