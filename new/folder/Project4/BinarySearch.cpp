/*
 Project 4
 Name: Claudia Preciado, Ryan Chase
 Project Name: Binary Search
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 12/7/16
 */


#include <iostream>
using namespace std;

void binsearch()
{
int size;
int arr[20];
int searched_value;
bool found = false; int low = 0;
cout << "What is your key? \n";
cin >> size;
int high = size - 1; int pos = 0;
while (low <= high && !found)
{
    pos = (low + high) / 2; // Midpoint of the subsequence
    if (arr[pos] == searched_value) { found = true; }
    else if (arr[pos] < searched_value) { low = pos + 1; } // Look in second half else { high = pos - 1; } // Look in first half
}
if (found) { cout << "Found at position " << pos; }
    else { cout << "Not found. Insert before position " << pos; }
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
    } cout << "Selection sort: " << endl;
    selectsrt(arr, 20);
    cout << "Bubble sort: " << endl;
    bbblsrt(arr, 20);
    return 0;
}

