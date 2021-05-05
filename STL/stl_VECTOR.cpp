/*
TOPIC std::vector
 
 Syntax std::vector <datatype> vector_name;

 std::vector is a sequence container also known as Dynamic array or array.
 Dynamic array:- do not have restriction over size.
 Array:- has fast access to any element.
 Vector = dynamic array + array

 push_back()    for inserting element

Element accessing:-
at(),   [],    front(), back(),  data()

Modifier:-
push_back(), resize(), clear(),  swap(),    emplace(),  emplace_back(), erase(),capacity()
reserve()

*/
//#include<bits/stdc++.h>

#include<iostream>
#include<vector>
using namespace std;
int main(){

    //initialization
    vector<int> marks; //vector size is 5 and every element all 5 are 20.
    // vector<int> channels;
    // channels = {12, 23, 4, 4,4,34,34,34 ,54,7,78,69}; //initialzer list
    // vector<int> trees {1,45,45,5,67,78,78,78,786,5}; //uniform initialization(new way!)

    //Declaration
    //marks[3] = 55;
   // channels.at(6) = 45

   marks.push_back(23);
   marks.push_back(34);
   marks.push_back(45);
   
    for(int x : marks)
        cout<<x<<" ";

    cout<<endl;

    marks.pop_back();

    
    for(int x : marks)
        cout<<x<<" ";

    cout<<endl;


    vector<int>::iterator itr = marks.begin();

    for(itr = marks.begin(); itr != marks.end(); itr++)
        cout<<*itr<<" ";



}