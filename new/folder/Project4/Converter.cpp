/*
 Project 4
 Name: Claudia Preciado, Ryan Chase
 Project Name: Menu Conversion Program
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 12/7/16
 */


#include <iostream>
#include <cmath>

using namespace std;

void showChoices();
double miles(double, double);
double degf(double, double);

int main ()
{
    double x, y;
    int choice;
    do
    {
        showChoices();
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Input miles to be converted, enter * to submit: \n";
                cin >> x >> y;
                cout << x << " is " << miles(x,y) << " in kilometers" << endl;
                break;
            case 2:
                cout << "Input degrees (in Farenheit) to be converted, enter * to submit: \n";
                cin >> x >> y;
                cout << x << " is " << degf(x,y) << " in degrees Celsius" << endl;
                break;
            case 3:
                cout << "Program exited\n";
                break;
        }
    }
    while (choice != 3);
    return 0;
}
void showChoices()
{
    cout << "MENU" << endl;
    cout << "1: Miles to Kilometers " << endl;
    cout << "2: Farenheit to Celsius " << endl;
    cout << "3: Exit " << endl;
}
double miles(double mi, double km)
{
    return km = mi * 1.609344;
}
double degf(double fah, double cel)
{
    return cel = 5*(fah-32)/9;
}

