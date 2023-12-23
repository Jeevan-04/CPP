#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int toss;
    cout << "Enter your choice ( head/tail ): ";
    cin >> toss ;

    int randomChoice = rand() ;

    if (randomChoice == toss)
    {
        cout << " You Won !!! " << endl;
    }
    else
    {
        cout << " You loose " << endl;
    }

    return 0;
}