/*
1 byte = 8 bits
*pointer means value at number, and that value can be changed.
Here * is called dereferencing operator.

*/

#include<iostream>
using namespace std;

int main(){
    int number;
    int *pointer;
    number = 69;
    pointer = &number;

    cout<<"Value of number:"<<number<<endl;
    cout<<"Address of number:"<<&number<<endl;
    cout<<"Value of pointer:"<<pointer<<endl;
    cout<<"Address of pointer:"<<&pointer<<endl;
    cout<<"The value of *pointer:" <<*pointer<<endl;
    bool yeah = (number == *pointer);
    cout<<yeah<<endl;
    *pointer = 420;
    cout<<number<<endl;
    

    
}