#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file1("Atul.txt");

    ofstream file2("Atulcpy");

    //char ch;
    string str;
    while(!file1.eof()){
        getline(file1, str);
        file2<<str;
    }

    file1.close();
    file2.close();
}