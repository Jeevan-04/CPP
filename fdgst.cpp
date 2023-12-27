#include <iostream>
using namespace std;
int main() {
	string a;
    int b;
	cin >> a;
    b= a.length();
    for (int i = 0; i < b; i++)
    {
       if (a[i] == a[b-1-i])
       {
        cout<<"YES";
       }
       else
       {
        cout<<"NO";
       }
       break;
    }
    return 0;
}