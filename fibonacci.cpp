#include <iostream>
using namespace std;

int main()
{
    int num, firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> num;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num; ++i) {
        if(i == 1) {
            cout << firstTerm << " ";
            continue;
        }
        if(i == 2) {
            cout << secondTerm << " ";
            continue;
        }
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        cout << nextTerm << " ";
    }

    return 0;
}