#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int num[20]={};
    

    cout<< "Enter total numbers to be entered (1 -20): ";
    cin>>n;
    cout<< endl;

    for(i = 0; i < n; ++i) 
    {
      cout << "Enter Number " << i + 1 << " : ";
      cin >> num[i];
    }

    for(i = 1;i < n; ++i) 
    {
      if(num[0] < num[i])
      num[0] = num[i];
    }

    cout<< endl << "largest number is: "<< num[0];

    return 0;
}