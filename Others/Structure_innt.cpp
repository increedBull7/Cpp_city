#include<iostream>

using namespace std;

struct Body{
    int array[5];
    int n;
};

int main(){
    Body b1= {{1,2,3,4,5},6};
    cout<<b1.array[0];

}