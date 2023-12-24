#include <iostream>
using namespace std;

class Students
{

    private:
      string name;
      int roll_number;
      int marks;

    public:
      Students()
       {}
      Students(string name, int roll, int mark)
       {
            name = name;
            roll_number=roll;
            marks=mark;

       } 
      ~Students()
      {}
};

int main()
{
    int a;
    cout<< "Enter the number of Students: ";
    cin>> a;

    int c,d;
    string b;
    int sum=0;
    
    Students p[a];

    for (int i = 0; i < a; i++)
    {
        cin.ignore();
        cout<<"Name: "<<endl;
        getline(cin, b);

        cout<< "Roll no:. "<<endl;
        cin>> c;

        here:
        cout<<"Marks: "<<endl;
        cin>> d;

        if (d> 10)
        {
            goto here;
        }

        sum += d;
        p[i] = Students (b, c, d) ;
    }

  cout<< "Total: "<<sum<<endl;
  cout<< "average: "<<sum/a<<endl;
  if (d>7)
        {
            cout<<"Grade: A";
        }
        else if (d >5 && d<7)
        {
            cout<<"Grade: B";
        }
        else if (d>3 && d<5)
        {
            cout<<"Grade: c";
        }
        else
        {
            cout<<"Grade: Fail !";
        }

  return 0;
}