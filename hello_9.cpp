//vowels or consonants
#include <iostream>
using namespace std;

int main()
{
    char input;

    cout<< "Enter the character: ";
    cin>> input;

    if (input == 'A'||input == 'a'||
        input == 'E'||input == 'e'||
        input == 'I'||input == 'i'||
        input == 'O'||input == 'o'||
        input == 'U'||input == 'u')
    {
        cout<< "The entered character "<< input<< " is a vowel.";
    }
    else
    {
        cout<< "The entered character "<< input<< " is consonant.";
    }
    
    return 0;
}