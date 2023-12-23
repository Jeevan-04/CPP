#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<< "Enter a number: ";
    cin>> number;

    for (int i=0; i<=10; i++ ) {
          cout<< number << "*" << i << "= " << number*i << endl;
    }

    return 0;
}