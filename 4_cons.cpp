#include <iostream>
using namespace std;

class Employee
{
    private:
     int salary;
    
    public:
     Employee()  //default  constructor
      {
        cout<<"Default Constructor is called."<<endl;
        salary = 50000;
        cout<< salary<<endl;
      }
     
       //must provide default constructor as well so that it doesnt jumble and say to provide the arguments for the same parameter.

     Employee(int s)   //parameterized constructor.
      {
        cout<<"Parameterized constructor is called."<<endl;
        salary = s;
        cout<< salary<<endl;
      }
     Employee(Employee &obj)
      {
        cout<< "copy constructor is called. "<<endl;
        salary = obj.salary;
        cout<< salary<<endl;
      }
    ~Employee()
     {
        cout<< "Destructor is called."<<endl;
     }
      
};
 //Employee &e3 = e2;
int main()
{
    Employee e1,e2(60000), e3 = e2;
    


    return 0;
}