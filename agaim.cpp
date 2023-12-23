#include <iostream>
using namespace std;

int main()
{
   
    string toss; 
    
    cout << "Enter your choice (head/tail): ";
    cin >> toss ;

    string hello[] = { "head" , "tail"};
    int hii_hello = sizeof(hello) / sizeof(hello[0]);

    int randomIndex = rand() % hii_hello;
    string randomhello = hello[randomIndex];

    cout << "Randomly selected toss: " << randomhello << endl;

    
    if (randomhello == "head" && toss == "head")
    {
        cout << " You Won !!! " << endl;
    }else if (randomhello == "head" && toss == "tail")
    {
        cout << " You lose " << endl;
    }else if (randomhello == "tail" && toss == "tail")
    {
        cout << " You Won !!! " << endl;
    }else if (randomhello == "tail" && toss == "head")
    {
        cout << " You lose " << endl;
    }

    return 0;
}
