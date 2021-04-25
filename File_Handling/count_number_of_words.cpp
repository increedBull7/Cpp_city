#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream fin("Atul.txt");

    char word[20];
    int count = 0;
     while(!fin.eof()){
         fin>>word;
         count++;
     }
     cout<<"Numder of words in file:"<<count<<endl;
}