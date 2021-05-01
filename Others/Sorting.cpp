#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int array[] = {4,5,2,6,1,5,7,4,88,5,4};
    sort(array, array + 11);
    for(int i = 0; i < sizeof(array) / 4; i++)
        cout<<array[i]<<" ";

}