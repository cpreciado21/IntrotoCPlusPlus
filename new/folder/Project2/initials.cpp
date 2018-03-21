//
//  main.cpp
//  initials
//
//  Created by Claudia Preciado on 9/21/16.
//  Copyright © 2016 Claudia Preciado. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your first name: ";
    string first;
    cin >> first;
    cout << "Enter your signficant other's first name: ";
    string second;
    cin >> second;
    string initials = first.substr(0,1)
    + "&" + second.substr(0,1);
    cout << initials << endl;
    
    return 0;
}