//Create a while loop that simulates a simple guessing game where the user has to guess a secret number.
#include <iostream>
using namespace std;

int main()
{
    int sec_num;

    here:
    cout<<"Guess: ";
    cin>> sec_num;
    
    while (sec_num != 0)
    {
        cout<<"Guess the correct number."<<endl;
        cout<<"Hint: Something you never want to be."<<endl;
        goto here;
    }
    
    cout<<"Hurray, you guessed it right !!!";

    return 0;
}