//
#include<iostream>
using namespace std;

int  main()
{
    double bill;

    cout<<"Enter the invoice amount: ₹";
    cin>> bill;

    if (bill >= 100000)
    {
        cout<< "hey, you get 20% OFF"<<endl;
        cout<< "You get Discout of: "<<"₹"<< (bill *0.20)<<endl;
        cout<< "payable amount: "<<"₹"<< bill - (bill *0.20)<<endl<<endl;
    }
    else if (bill >= 50000)
    {
        cout<< "hey, you get 16% OFF"<<endl;
        cout<< "You get Discout of: "<<"₹"<< (bill *0.16)<<endl;
        cout<< "payable amount: "<<"₹"<< bill- (bill *0.16)<<endl<<endl;
    }
    else if (bill >= 25000)
    {
        cout<< "hey, you get 14% OFF"<<endl;
        cout<< "You get Discout of: "<<"₹"<< (bill *0.14)<<endl;
        cout<< "payable amount: "<<"₹"<< bill - (bill *0.14)<<endl<<endl;
    }
    else if (bill >= 10000 )
    {
        cout<< "hey, you get 5% OFF"<<endl;
        cout<< "You get Discout of: "<<"₹"<< (bill *0.05)<<endl;
        cout<< "payable amount: "<<"₹"<< bill -(bill *0.05) <<endl<<endl;
    }
    else
    {
        cout<< "payable amout: "<<"₹"<< bill<<endl<<endl;
    }
    
    return 0;
}