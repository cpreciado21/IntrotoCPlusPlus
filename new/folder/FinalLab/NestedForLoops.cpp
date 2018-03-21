//
//  main.cpp
//  Q6
//
//  Created by Claudia Preciado on 12/12/16.
//  Copyright © 2016 Claudia Preciado. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=17; i>1; i=i/2)
    {
        for (j=2; j<i; j=j+3)
        {
            cout << j << i+j << endl;
        }
    }
    return 0;
}
