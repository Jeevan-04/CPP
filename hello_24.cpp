//train.
#include<iostream>
using namespace std;

int main()
{
    int speed;
    cout<< "speed: ";
    cin>> speed;

    if (speed >= 120)
        {
            cout<<"Dhire kar le bhai thuk jaayega."<<endl;
            cout<<"the speed must be "<< speed - 30 << " km/hr"<<endl;
        }
    else if (speed >= 80)
        {
            cout<<"Fine thik hai."<<endl;
            cout<<"the speed must be "<< speed - 20 << " km/hr"<<endl;
        }
    else if (speed < 80 )
        {
            cout<<"OK."<<endl;
        }
        
    return 0;
}