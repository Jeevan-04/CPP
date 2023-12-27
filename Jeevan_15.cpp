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
            int a,d,e;
            string f;
        public:
            void Rent()
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
            void Return()
            {
                
                cout<<"Choose Model: "<<endl;
                cout<<"(1) TATA"<<endl<<"(2) MARUTI"<<endl<<"(3) xyz"<<endl;
                cin>>a;
                cout<<"Date: ";
                cin>>e;
                cin.ignore();
                cout<<"Day: ";
                getline(cin, f);
                
            }
            void Display_Rent()
            {
                cout<<model<<endl;
                cout<<"Rs "<<Rental_price+d<<"/hr"<<endl;

            }
            void Display_Return()
            {
                cout<<"Model: "<<a<<endl;
                cout<<"Date: "<<e<<endl;
                cout<<"Day: "<<f<<e;
            }
            int Rent_return()
            {
                int b,c;
                cout<<"(1) Rent"<<endl<<"(2) Return"<<endl;
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
                   cout<<"Thank you !";
                }   
            }
    };

class Car : public Vehicle
    {
       private: 
        int p;
       public:
        void which_car()
        {
            cout<<"Which Car are you intended to look for ?";
            cin>>p;
        }
    };

class Motorcycle:public Vehicle
     {
       private: 
        int p;
       public:
        void which_motorcycle()
        {
            cout<<"Which motorcycle are you intended to look for ?";
            cin>>p;
        }
    };

class Truck:public Vehicle
     {
       private: 
        int p;
       public:
        void which_truck()
        {
            cout<<"Which truck are you intended to look for ?";
            cin>>p;
        }
    };


int main()
{
    Vehicle s1;

    int s;
    string q;

    cout<<"(1) Rent"<<endl<<"(2) Return"<<endl;
    cin>>s;

    cin.ignore();

    cout<<"Which Vehicle ?"<<endl;
    getline(cin,q);

    if (q == "car")
    {
        Car c1;
        c1.Rent_return();
        c1.which_car();

        if (s == 1)
        {
            c1.Rent();
            c1.Display_Rent();
        }
        else
        {
            c1.Return();
            c1.Display_Return();
        }

    }
    else if (q == "truck")
    {
        Truck t1;
        t1.Rent_return();
        t1.which_truck();

        if (s == 1)
        {
            t1.Rent();
            t1.Display_Rent();
        }
        else
        {
            t1.Return();
            t1.Display_Return();
        }

    }
    else if ( q == "motorcycle")
    {
        Motorcycle m1;
        m1.Rent_return();
        m1.which_motorcycle();

        if (s == 1)
        {
            m1.Rent();
            m1.Display_Rent();
        }
        else
        {
            m1.Return();
            m1.Display_Return();
        }
    }
    else
    {
        cout<<"Enter valid input.";
    }
    


    return 0;
}