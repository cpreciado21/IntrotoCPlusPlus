/*
 Project 3
 Name: Claudia Preciado, Ryan Chase, Gustavo Mata, Thongsavik Sirivong
 Project Name: Binary to Decimal
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 11/16/16
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int const limit = 32; //limiting the amount of digits
    int binary[limit];
    int inputsize = 0;
    int input;
    double sum = 0;
    
    cout << "Input a string of binary (1s and 0s) up to 32 digits. \n";
    cout << "Include a space after every digit. Enter any letter to stop: " << endl;
    while (cin >> input)
    {
        if (inputsize < limit)
        {
            binary[limit] = input;
            inputsize++;
        }
        else //if the condition is not met, program will exit
        {
            cout << "Error: You entered too many digits. Try again \n";
            exit(EXIT_FAILURE);
        }
    }
    int x = inputsize - 1;
		  for (int input = 0; input < inputsize; input++)
          {
              if (binary[input]=='1')
              {
                  sum = pow(2, x) + sum;
                  x--;
              }
              if (binary[input]=='0')
              {
                  x--;
              }
          }
    cout << "The decimal equivalent is: " << sum << endl;
    return 0;
}
