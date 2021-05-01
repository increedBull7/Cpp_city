#include<iostream>
using namespace std;
int main(){
    int n,i,c = 0;
    cout<<"Enter a number:"; cin>>n;
    for(i = 1; i <= n; i++)
        if(n % i == 0)
            c++;

    if(c == 2)
        cout<<"Number is prime.\n";
    else cout<<"Number is not a prime.\n";
            
}