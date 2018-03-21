/*
 Project 4
 Name: Claudia Preciado, Ryan Chase
 Project Name: Word Processor
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 12/7/16
 */

#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int main()
{
    char sentence[99];
    cout << "Please enter a string: " <<endl;
    cin >> sentence;
    cin.getline(sentence,99);
    cout << "This is your string: " << sentence;
    unsigned long size = strlen(sentence);
    for (int i =1; i < size; i++)
    {
        if(isupper(sentence[i]))
        {
            for(int n=i; n<size; n++)
            {
                sentence[n]= tolower(sentence[n]);
            }
        }
    }
    cout << "There were errors in your string" <<endl;
    cout << "This is your fixed string: " << sentence << endl;
    getchar();
    
}
