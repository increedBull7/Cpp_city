#include<iostream>

using namespace std;


struct Array{
    int *arr;
    int size;
    int length;
};

void display(Array arr);

int main(){

    Array a1;

    cout<<"Enter the size:";
    cin>>a1.size;

    a1.arr = new int[a1.size];
    a1.length = 0;

    for(int i = 0; i < a1.size; i++){
        cout<<"Enter the "<<i + 1<<"th element:";
        cin>>a1.arr[i];
        a1.length ++;
    }

    display(a1);



    return 0;
}

void display(Array arr){
    cout<<"Elements of Array:\n";

    for(int i = 0; i < arr.length; i++)
        cout<<arr.arr[i]<<"--";
     
    cout<<endl;
}

