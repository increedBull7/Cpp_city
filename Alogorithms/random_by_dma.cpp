#include<iostream>

using namespace std;

int main(){

cout<<"Enter the size of Array:";
    int size;
    cin>>size;
    int *parray = new int[size];
//**************************************


//*************************************************
//Code to insert random numbers in D.Array.
    int rdness;
    cout<<"Enter the upper limit of randomness:";
    cin>>rdness;

    for(int i = 0 ; i < size ; i ++)
        parray[i] = rand() % rdness;


    for(int j = 0 ; j < size ; j++)
        cout<<parray[j]<<" ";

    return 0;

}