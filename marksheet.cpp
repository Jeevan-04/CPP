#include <iostream>
using namespace std;

int main()
{
    int students[10]={};
    int i, marks;
    
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the marks of roll no "<< i+1<<": ";
        cin>> marks;
        students[i]=marks;
    }

    for (i = 0; i < 10; i++)
    {
        cout << "Enter the Roll no:. ";
        cin>> i;
        cout<< "Marks of Roll no."<<i<<" is: ";
        cout<< students[i-1] <<endl;

    }
    
    return 0;
}   