//to generate the calendar of any given month.where even specify the month and starting day of the month.
#include<iostream>
#include <string>
using namespace std;

int main()
{
    int mon, day;
    //1.jan, 2.feb, 3.mar, 4.apr, 5.may, 6.june, 7.july, 8.aug, 9.sept, 10. oct, 11.nov, 12.Dec.
    //1.mon, 2.tue, 3.wed, 4.thurs, 5.fri, 6.sat, 7.sun.
    cout<<"Enter the month: ";
    cin>> mon;

    cout<<"Enter the day: ";
    cin>> day;

    string month[12]={"january","february","march","april","may","june","july","august","september","october","november","december"};
    string day_arr[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};

    int year;

    cout<< "Year: ";
    cin>> year;


    //if (year%400 == 0)
    if (year%4==0 && year%100 !=0)
    {

        if (mon ==1||mon ==3||mon ==5||mon ==7||mon ==8||mon ==10||mon ==12)
        {
            cout<< month[mon-1]<<endl;
            for (int i = 1; i <= 31 ; i++)
            {
                cout<< i <<". "<< day_arr[day-1]<<endl;
                day++;
                if (day >7)
                {
                    day =1;
                }
            }
        }
        else if (mon == 2)
        {
            cout<< month[mon-1]<<endl;
            for (int i = 1; i <= 29 ; i++)
            {
                cout<< i <<". "<< day_arr[day-1]<<endl;
                day++;
                if (day>7)
                {
                    day =1;
                }
            }
        }
        
        else
        {
            cout<< month[mon-1]<<endl;
            for (int i = 1; i <= 30 ; i++)
            {
                cout<< i <<". "<< day_arr[day-1]<<endl;
                day++;
                if (day>7)
                {
                    day =1;
                }
            }
        }



    }
    else
    {
        if (mon ==1||mon ==3||mon ==5||mon ==7||mon ==8||mon ==10||mon ==12)
        {
            cout<< month[mon-1]<<endl;
            for (int i = 1; i <= 31 ; i++)
            {
                cout<< i <<". "<< day_arr[day-1]<<endl;
                day++;
                if (day>7)
                {
                    day =1;
                }
            }
        }
        else if (mon == 2)
        {
            cout<< month[mon-1]<<endl;
            for (int i = 1; i <= 28 ; i++)
            {
                cout<< i <<". "<< day_arr[day-1]<<endl;
                day++;
                if (day>7)
                {
                    day =1;
                }
            }
        }
        
        else
        {
            cout<< month[mon-1]<<endl;
            for (int i = 1; i <= 30 ; i++)
            {
                cout<< i <<". "<< day_arr[day-1]<<endl;
                day++;
                if (day>7)
                {
                    day =1;
                }
            }
        }


    }

    return 0;
}

    