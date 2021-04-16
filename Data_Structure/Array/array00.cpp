#include<iostream>

using namespace std;

int main(){
    int statiC[4];


    int size = 4;

    int * dynamiC;
    dynamiC = new int[size];

    statiC[2] = 10;
    cout<<statiC[3]<<endl;
    cout<<statiC[2]<<endl;
    cout<<statiC[1]<<endl;
    cout<<statiC[0];


    

}