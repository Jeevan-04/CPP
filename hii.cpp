#include <iostream>
using namespace std;

int main()
{
    int toss;
    cout << "Enter your choice ( head/tail ): ";
    cin >> toss ;
    
    string hello[] = { "head" , "tail"};
    int hii_hello = sizeof(hello) / sizeof(hello[0]);
    
    int randomIndex = rand() % hii_hello;
    string randomhello = hello[randomIndex];

    cout << "Randomly selected toss: " << randomhello << endl;

    if (randomhello == "heads" && toss == "heads")
    {
        cout << " You Won !!! " << endl;
    }else if (randomhello == "heads" && toss == "tails")
    {
        cout << " You loose " << endl;
    }else if (randomhello == "tails" && toss == "tails")
    {
        cout << " You Won !!! " << endl;
    }else if (randomhello == "tails" && toss == "heads")
    {
        cout << " You loose " << endl;
    }
    
    
    
    

    
    
    
    
    
    
    
    
    return 0;
}