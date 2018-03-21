//
//  main.cpp
//  Q2
//
//  Created by Claudia Preciado on 12/9/16.
//  Copyright © 2016 Claudia Preciado. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float x = 0;
    float y= 0;
    float z = 0;
    float sum;
    float avg;
    cout << "Enter your first number: \n";
    cin >> x;
    cout << "Enter a second number: \n";
    cin >> y;
    cout << "Enter your last number: \n";
    cin >> z;
    sum = (x+y+z);
    avg = (sum/3);
    cout << "The average of " << x << ", " << y << ", and " << z << " is " << avg << endl;
    return 0;
}
