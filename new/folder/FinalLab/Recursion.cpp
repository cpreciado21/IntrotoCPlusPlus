//
//  main.cpp
//  Q9
//
//  Created by Claudia Preciado on 12/12/16.
//  Copyright © 2016 Claudia Preciado. All rights reserved.
//

#include <iostream>
using namespace std;

int recurs(int n)
{
    if (n == 1) return 2;
    else if ( n==2) return 2;
    else return 2*recurs(n-1)+recurs(n-2);
}

int main()
{
    cout << recurs(5) << endl;
    cout << recurs(15) << endl;
}
