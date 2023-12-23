#include <iostream>
using namespace std;

class Students
{
    private:
      string college_name;
      string rollno;
      string name;
      double marks;

    public:

     Student()
      {
        cout<< "Default constructer is called...\n";
        college_name = "itm \n";
        name= "xyz \n";
        rollno= "itm001 \n";
        marks = 89;

        cout<<endl;
        cout<<"college name: "<<college<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<,endl;
        cout<<"marks: "<<marks<<endl;
      }

      students(student &obj)
      {
        cout<<"Copy constructor is called....\n";
        college = obj.collge
      }
     
     void setData (string cn, string rn, string n, double m)
      {
        college_name = cn;
        rollno = rn;
        name = n;
        marks = m;
      }

     void displayData ()
       {
        cout<< college_name<<endl;
        cout<< rollno<<endl;
        cout<< name<<endl;
        cout<< marks<<endl;
       }
}

int main()
{
    
    Students S1, S2 ("ITM","Amit","12346","97");
    Students S3=S2;

    return 0;
}