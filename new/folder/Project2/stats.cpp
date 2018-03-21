/*
 Project 2
 Name: Claudia Preciado
 Project Name: Stats
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 10/31/16
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int age, sum=0, sum2=0, count=0, freq[100]={0};
    float avg, stdev;
    cout << "Enter age, when done enter -1\n";
    cin >> age;
    while (age >=0)
    {
        count++;
        sum = sum + age;
        sum2 = sum2 + age*age;
        freq[age]++;
        cout << "Please enter age, when done enter -1\n";
        cin >> age;
    }
    avg =sum/count;
    cout << "Results\n";
    cout << "The mean is: \n" << avg;
    stdev = sqrt(sum2/count -avg*avg);
    cout << "The standard deviation is: \n"<<stdev;
}
