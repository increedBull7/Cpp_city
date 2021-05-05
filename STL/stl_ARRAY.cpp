/*
TOPIC std::array

Syntax std::array<data_type, array_size> array_name;

array_size is required at compile time.
std::array is alway called by value.
For accessing elements:-
1. at()     at(index);
2. front()  front element
3. back()   last element
4. data()   for getting access to underlying array inside std::array class template
*/
#include<bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;
int main(){

    //Declaration
    array<int , 4> games = {1,2,3,4};

    //Initialization
    cout<<games[2];


}