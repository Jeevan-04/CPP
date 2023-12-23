#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the nth term: ";
    cin >> num;
    int i = 2;

    do
    {
        int j = 2;
        int count = 0;

        do
        {
            if(i == 2)
            {
                break;
            }
            if (i % j == 0)
            {
                count++;
            }
            j++;
        } while (j <= i / 2);

        if (count == 0)
        {
            cout << i << " ";
        }

        i++;
    } while (i <= num);

    return 0;
}
