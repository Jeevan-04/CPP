#include <iostream>
using namespace std;

class Employee
{
    public:
     int salary;
    
    // public:
    //  Employee()  //default  constructor
    //   {
    //     cout<<"Default Constructor is called."<<endl;
    //     salary = 50000;
    //     cout<< salary<<endl;
    //   }
};

int main()
{
    Employee e1,e2;
    cout<< e1.salary;

    return 0;
}