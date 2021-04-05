#include<iostream>
using namespace std;


int main(){

    string strinG = "I       wanna   love you";
    int word = 1;
    for(int i = 0; strinG[i] != '\0'; i++){
        if(strinG[i] == ' ' && strinG[i -1] != ' ')
            word++;
    }

    cout<<word<<endl;
    cout<<strinG;
    return 0;
}