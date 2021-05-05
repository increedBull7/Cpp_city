#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    //Sorting an Array
    int array[] = {4,5,2,6,1,5,7,4,88,5,4};
    sort(array, array + 11);
    cout<<"Array is sorted. (Merge Sort)";
    for(int i = 0; i < sizeof(array) / 4; i++)
        cout<<array[i]<<" ";

    cout<<endl;

    //Reversing an Array
    reverse(array, array + 11);
    cout<<"Array is reversed.";
     for(int i = 0; i < sizeof(array) / 4; i++)
        cout<<array[i]<<" ";
    
    cout<<endl;

    //Maximum Element
    int *max = max_element(array, array + 11);
    cout<<*max;

    cout<<endl;

    //Minimum same as maximum

    // Sum of all elements
    int sum = 0;
    accumulate(array, array + 11, sum);
    cout<<sum<<endl;

    //cout()

    //find()

    //binary Search works on sorted list
    
    



}