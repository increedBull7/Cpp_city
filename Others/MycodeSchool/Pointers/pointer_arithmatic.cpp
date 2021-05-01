#include<iostream>
using namespace std;

int main(){
    int number, *pointer;
    number = 69;
    pointer = &number;
    cout<<pointer<<" "<<&pointer + 2<<endl;
    cout<<*pointer + 2<<endl;
    cout<<number<<endl;
}