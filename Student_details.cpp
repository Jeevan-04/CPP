#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first_name;
  string Last_name;

  cout<< "Enter your First Name: ";
  cin>> first_name;

  cout<< "Enter your Last Name: ";
  cin>> Last_name;

  string Full_name= first_name + " "+ Last_name;

  cout<< "Hello, "<< Full_name <<"!"<<endl;

  string college;
  cout<< "Enter your college name:. ";
  cin>> college;
  
  
  
  
  
  long int num;
  cout<< "Enter your phone number";
  cin>> num;


  string mail;
  cout<< "Enter your email id: ";
  cin>> mail;

  int roll_no;
  cout<< "Enter your Roll no:. ";
  cin>> roll_no;


  
  
  
  
  
  
  
  cout<< endl<< Full_name<<endl;
  cout<< college<<endl;
  cout<< num<<endl;
  cout<< mail<<endl;
  cout<< roll_no<<endl;




  return 0;
}