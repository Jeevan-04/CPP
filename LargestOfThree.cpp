#include <iostream>
using namespace std;

int main()
{
    while (true)
     {
        int num1, num2, num3; //Declaring the three numbers which is to be considered for determining the largest number.

        //ask the user for the first number
        cout << "Enter the first number: ";
        cin >> num1;

        //ask the user for the second number
        cout << "Enter the second number: ";
        cin >> num2;

        //ask the user for the third number
        cout << "Enter the third number: ";
        cin >> num3;

        if ( num1 >= num2 && num1 >= num3)
          {
            cout << num1 << " is the largest number." << endl;
          }
          else if (num2 >= num1 && num2 >= num3)
           {
            cout << num2 << " is the largest number." << endl;
           }
           else
            {
                cout << num3 << " is the largest number." << endl;
            }

        char choice;
        cout << "Do you want to enter numbers again ?  (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice !='Y')
         {
            break;
         }

     }
     
     return 0;
}