#include <iostream>
using namespace std;

int main()
{
    int pilot;
    cout << "enter the height of the plane"; //asking user for the input but in feets
    cin >> pilot;

    //now starts with the condition part
    if ( pilot > 5000)
    {
        cout << endl << "Go Around.";
    }
     else if (pilot <= 5000 && pilot > 2000)
     {
        cout << endl << "Open Gears for Tyres";
     }
      else if (pilot >= 1000 && pilot <= 2000)
       {
          cout << endl << "Open Flaps";
       }
         else if (pilot < 1000)
         {
            cout << endl << "Land the Plane and Apply the Reverse thrust";
         }
           
         

    return 0;
     
}