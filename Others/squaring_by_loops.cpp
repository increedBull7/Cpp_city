#include<iostream>
using namespace std;
int main(){

    cout<<"Enter a number:";
    int num;
    int square = 0;
    cin>>num;
    for(int i = 1; i<=num; i++)
       square += num;


    cout<<square<<endl;
    return 0;
}