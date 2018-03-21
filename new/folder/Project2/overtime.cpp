/*
 Project 2
 Name: Claudia Preciado
 Project Name: Overtime
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 10/31/16
 */

#include <iostream>
using namespace std;

int main()
{
    int time =0 , pay= 0, rate=0;
    cout << "Enter how many hours worked this week: \n";
    cin >> time;
    cout << "Enter pay rate per hour:\n";
    cin >> rate;
    if (time > 40)
    {
        pay = (40*rate)+ (time-40)*rate*1.5;
    cout << "You earned: \n" << pay;
    }
    else
    {
        pay = (time*rate);
        cout << "You earned: \n" << pay;
    }
}
