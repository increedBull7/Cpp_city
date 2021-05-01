#include<iostream>

using namespace std;

int main(){

    cout<<"Enter the size of Array:";
    int size;
    cin>>size;
    //int parray[222];
    int *parray = new int[size];

    for(int i = 0 ; i < size ; i ++)
        cout<<parray[size];

    return 0 ;
}