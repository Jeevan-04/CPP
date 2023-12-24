#include <iostream>
using namespace std;

class Students
{

    private:  // access specifier for Data members
       int roll; 
       string name;
    
    public:   // access specifier for member Functions
       void setData(int r, string n) //parameters
         {
            roll = r;
            name = n;
         }
        void set_Data(int r, string n = "ABC") //with default arguments.
         {
            roll = r;
            name = n;
         }
        void setDetails()
         {
            cout<< "Enter the roll no: ";
            cin>> roll;

            cout<< "Enter the name: ";
            cin>> name;
         }
       void getData(); //forward declaration.
        
};

void Students :: getData()
         {
            cout<< roll;
            cout<<endl;
            cout<< name;
            cout<<endl;
         }

int main()
{
    Students s1,s2,s3;

    s1.set_Data(1); //passing arguments
    s2.setData(2, "XYZ"); //passing arguments
    s3.setDetails();

    s1.getData();
    cout<<endl;
    s2.getData();
    cout<<endl;
    s3.getData();


    return 0;
}