#include <iostream>
using namespace std;

class Product
 {
    private:
      int pro_id;
      string pro_name;
      float price;
      int quantity;

    public:
      Product()
      {}
      Product(int id, string name, float mrp,int quant )
        {
          pro_id= id;
          pro_name = name;
          price = mrp;
          quantity= quant;

          cout <<endl<<"Product ID: "<<pro_id<< endl;
          cout <<"Product Name: "<<pro_name<< endl;
          cout <<"Price: "<<price<< endl;
          cout <<"Quantity: "<<quantity<< endl;
        }
 };

int main()
{
  int a, b, e;
  float d;
  string c;
  cout<< "Enter the no. of products: ";
  cin>> a;

  Product p[a];
  
  int s=1;
  
  for (int i = 0; i < a; i++)
  {
    cout<< "For Product "<< s++ << ": " <<endl;
    
    cout<<"Enter the Product ID: ";
    cin>>b;
          
    cout<<"Enter the Product Name: ";
    cin>> c;
          
    cout<<"Enter the Product Price: ";
    cin>> d;
          
    cout<<"Enter the Product Quantity: ";
    cin>> e;

    p[i] = Product (b, c, d, e) ;
  }
  
  return 0;
}