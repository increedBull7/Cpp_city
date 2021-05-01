#include<iostream>
#include<string>
using namespace std;

int main(){

    string test = "atul prachi cheeku pragati";
    string *str;
    //cout<<test;
    str = &test;
    
    cout<<test[1];
}