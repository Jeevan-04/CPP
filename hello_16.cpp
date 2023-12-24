//print your name for 100 times
#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    // int a=1;
    for (int i = 1; i <= 100; i++)
    {
        cout<< "(" << i<<")"<< name <<endl;
    }
    
    return 0;
}