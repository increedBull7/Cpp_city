#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ofstream outFile("Filee.txt", ios::app);

    string text;

    getline(cin, text);

    outFile<<"This is a file\n";
    outFile<<"This is second line\n";
    outFile<<text;
    outFile.close();
}