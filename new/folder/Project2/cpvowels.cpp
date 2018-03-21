/*
 Project 1
 Name: Claudia Preciado
 Project Name: Vowels
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 10/12/16
 */

#include <iostream>
using namespace std;

int main()
{
    int counta,counte,counti,counto,countu;
    char text;
    counta=0;
    counte=0;
    counti=0;
    counto=0;
    countu=0;
    cout<<"Please enter vowels, one at at a time, to end enter *\n";
    cin.get(text);
    while(text != '*')
    {
        if (text == 'a') counta = counta+1;
        if (text == 'e') counte = counte+1;
        if (text == 'i') counti = counti+1;
        if (text == 'a') counto = counto+1;
        if (text == 'u') countu = countu+1;
        cin.get(text);
        
    }
    cout<< "\n the number of a's are: " << counta;
    cout<< "\n the number of e's are: " << counte;
    cout<< "\n the number of i's are: " << counti;
    cout<< "\n the number of o's are: " << counto;
    cout<< "\n the number of u's are: " << countu;
    cout<<endl;
    return 0;
    //getchar(); getchar(); getchar(); getchar();
    //system("PAUSE");// to keep screen from running
}
