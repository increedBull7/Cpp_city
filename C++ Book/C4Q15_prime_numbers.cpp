#include<iostream>
using namespace std;
int main(){

    int num,i;

    cout<<"Enter the Number:";cin>>num;

    for(i = 2 ; i < num ; i++)
        if(num % i == 0)
            break;



    if(i == num)
        cout<<num<<" is Prime.\n";
    else
        cout<<num<<" is not Prime.\n";



    return 0;
}