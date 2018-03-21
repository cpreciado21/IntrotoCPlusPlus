/*
 Project 4
 Name: Claudia Preciado, Ryan Chase
 Project Name: Files
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 12/7/16
 */


#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

void combfiles();
void multispc();
int wordcount();
void wordlength();

int main()
{
    combfiles();
    multispc();
    wordlength();
    return 0;
}
void combfiles()
{
    string text1,text2,text3;
    ofstream concatenateFile;
    concatenateFile.open ("combinedFile.txt");
    ifstream doc1;
    doc1.open ("doc1.txt");
    ifstream doc2;
    doc2.open ("doc2.txt");
    ifstream doc3;
    doc3.open ("doc3.txt");
    getline(doc1, text1);
    getline(doc2, text2);
    getline(doc3, text3);
    concatenateFile << text1 << text2 << text3 << endl;
    doc1.close();
    doc2.close();
    doc3.close();
    concatenateFile.close();
}
void multispc()
{
    int spaces = 1;
    int words;
    string content;
    ifstream concatenateFile;
    concatenateFile.open("combinedFile.txt");
    getline (concatenateFile, content);
    for (int i=0; i <content.length(); i++)
    {
        if (content[i] == ' ')
        {
         spaces++;
        }
        words = wordcount();
        if (spaces == words)
        {
            cout << "There are no extra spaces \n";
        }
        else
        {
            cout << "There are multiple spaces somewhere in the file \n";
        }
    }
}
int wordcount (string content)
{
    int counting = 0;
    for (int i = 1; i < content.length(); i++)
    {
        if (content[i-1] != (' ' /* || "\n" || "\t"*/) && content[i] == (' ' /* || "\n" || "\t"*/))
        {
            counting++;
        }
    }
    cout << "Number of words in file: " << counting << endl;
    return counting;
}
void wordlength()
{
    int j = 0;
    string largest_word, shortest_word,result;
    string word[100];
    ifstream concatenateFile;
    concatenateFile.open("combinedFile.txt");
    while (!concatenateFile.eof())
    {
        concatenateFile >> word[j];
        j++;
    }
    concatenateFile.close();
    
}
