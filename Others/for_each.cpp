#include<iostream>
using namespace std;



int main(){

    int arr[10];
    int i;
    for(int x = 0; x < 10; x++)  
        arr[x] = x +1;

    for(int x : arr)
        cout<<x<<" ";

}