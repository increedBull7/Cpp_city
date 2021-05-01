#include<iostream>
using namespace std;
int main(){

    int atul;
    string love = "IlovePrachi";
    int *prachi;

    atul = 1000000000;
    //prachi = &atul;

    cout<<"The value of atul:"<<atul<<endl;
    cout<<"The address of atul:"<<&atul<<endl;

    cout<<"The value of love:"<<love<<endl;
    cout<<"The address of love:"<<&love<<endl;

    int array[3];

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    cout<<&array<<" "<<&array[0]<<" "<<&array[1]<<endl;
    //cout<<0x7ffedfd8b8ec<<endl;140732653943020



}