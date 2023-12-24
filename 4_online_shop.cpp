#include <iostream>
using namespace std;

class Product
 {
    private:
      string pro_name;
      double price;
      int quantity;

    public:
      Product()
      {}
      Product(string name, float mrp,int quant )
        {
          pro_name = name;
          price = mrp;
          quantity= quant;
        }
       void Data()
       {
        cout <<"Product Name: "<<pro_name<< endl;
        cout <<"Price: "<<price<< endl;
        cout <<"Quantity: "<<quantity<< endl;
       }
 };

int main()
{
  int a, e;
  double d;
  string c;
  cout<< "Enter the no. of products: ";
  cin>> a;

  Product p[a];
  
  int s=1;
  double sum=0;
  
  for (int i = 0; i < a; i++)
  {
    cout<< "For Product "<< s++ << ": " <<endl;
          
    cout<<"Enter the Product Name: ";
    cin>> c;
          
    cout<<"Enter the Product Price: ";
    cin>> d;
          
    cout<<"Enter the Product Quantity: ";
    cin>> e;

    sum+=(d*e);

    p[i] = Product(c,d,e);
  }

  for (int x = 0; x < a; x++)
  {
    p[x].Data();
  }
  
  cout<<endl<< "Total Invoice: "<<sum<<endl;

  return 0;
}