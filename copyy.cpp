/*6. Vehicle Rental System
Design a C++ program that simulates a vehicle rental system. 
Create a base class Vehicle with attributes like 
make, model, and rental price. 
Derive classes like Car, Motorcycle, and Truck from Vehicle. 
Implement functionality to rent and return vehicles, 
calculate rental charges, and display the rental history.*/

#include <iostream>
using namespace std;

class Vehicle
    {
        private:
            string model;
            int Rental_price;
            int d;
        public:
            void Details()
            {
                int a;
                cout<<"Choose Model: "<<endl;
                cout<<"(1) TATA"<<endl<<"(2) MARUTI"<<endl<<"(3) BMW"<<endl;
                cin>>a;
                if (a == 1)
                {
                    Rental_price=2000;
                }
                else if (a == 2)
                {
                    Rental_price=2500;
                }
                else
                {
                    Rental_price=5000;
                }
                
            }
            void Rent_return()
            {
                int b,c;
                cout<<"(1) Rent"<<endl<<"(2) Return";
                cin>>b;
                if (b == 1)
                {
                    cout<<"The duration of rent: ";
                    cin>> c;
                    if (c <= 10 )
                    {
                        d = 1300;
                    }
                    else if(c <=20)
                    {
                        d = 2000;
                    }
                    else if (c <=50)
                    {
                        d = 2700;
                    }
                    else if (c > 50)
                    {
                        d = 3200;
                    }

                }
                else
                {
                   cout<<"Date: ";
                   cout<<"Thank you !";
                }
                
            }
            void Display()
            {
                cout<<model<<endl;
                cout<<"Rs "<<Rental_price+d<<"/hr"<<endl;
            }
    };

class Car : public Vehicle
    {
       
    };

class Motorcycle:public Vehicle
    {

    };

class Truck:public Vehicle
    {

    };

int main()
{
    Vehicle s1;
    s1.Details();
    s1.Rent_return();
    s1.Display();

    return 0;
}