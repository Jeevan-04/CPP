#include <iostream>
using namespace std;

int main()
{
   
    int num;
    cout<<"Enter a number: ";
    cin>> num;

    for(int i=num ;i >= 1; i--){
      //cout<< i;
      cout<<endl;
      
      for (int j = 1; j <=i; ++j)
      {
        cout<< j;
      }
      
    }
    


    return 0;
}

    