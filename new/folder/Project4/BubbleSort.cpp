//
//  main.cpp
//  project4
//
//  Created by Claudia Preciado on 12/13/16.
//  Copyright © 2016 Claudia Preciado. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void selectsrt(int arr[], int a)
{
    int min,temp;
    
    for (int i=0; i < a-1; i++)
    {
        min = i;
        for (int j=i+1; j < a; j++)
        {
            if (arr[j] < arr[min])
            {
                min=j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        for (int k=0; k < a; k++)
        {
            cout << arr[k] << " ";
        }
    }
}
void bbblsrt (int arr[], int b)
{
    for (int i = 0; i < b; ++i)
    {
        for (int j=0; j < b-i-1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        for (int k=0; k <b;k++)
        {
            cout << arr[k] << " ";
        }
    }
}
int main ()
{
    srand(time(0));
    int arr[20];
    for (int a =0; a < 20; a++)
    {
        arr[a] = rand()%100;
    }
    cout << "Random unsorted array: \n";
    for (int b =0; b < 20; b++)
    {
        cout << arr[b] << " ";
    }
    cout << "Selection sort: " << endl;
    selectsrt(arr, 20);
    cout << "Bubble sort: " << endl;
    bbblsrt(arr, 20);
    return 0;
}

