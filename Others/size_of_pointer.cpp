#include<iostream>

using namespace std;

int main(){
    int num = 100;
    int arrayy[100];

    struct Rectangle{
        int length;
        int breadth;
    };
    Rectangle rect;

    int *numptr;
    numptr = &num;

    int *arrptr;
    arrptr = &arrayy[100];

    Rectangle *rectptr;
    rectptr = &rect;

    cout<<"Size of int pointer: "<<sizeof(numptr)<<endl;
    cout<<"Size of pointer to an array: "<<sizeof(arrptr)<<endl;
    cout<<"Size of pointer to a structure: "<<sizeof(rectptr)<<endl;
    cout<<"Size of int: "<<sizeof(int)<<endl;
    cout<<"Size of float: "<<sizeof(float)<<endl;
    cout<<"Size of double: "<<sizeof(double)<<endl;
    cout<<"Size of long int: "<<sizeof(long int)<<endl;
    




}