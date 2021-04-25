#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ifstream infile;
    infile.open("first_file.txt");

    if(!infile)
        cout<<"File not exist!!\n";

    string str;
    //int x;
    if(!infile.eof())
        infile>>str;

    cout<<str;


}