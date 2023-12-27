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
        public:
            void Details(string m, int p)
            {
                model = m;
                Rental_price = p;
                
                cout<<"MODEL: ";
                cin>>model;

                cout<<"Rental price: ";
                cin>> Rental_price;
            }
            void Display()
            {
                cout<<model;
                cout<<Rental_price;
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