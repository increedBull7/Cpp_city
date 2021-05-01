#include<iostream>
using namespace std;
int main(){

    int n, r, rev = 0,m;
    
    cout<<"Enter a number:"; cin>>n;
    m = n;
    while(n > 0){
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
        
    }
    if(m == rev)
        cout<<"The number is Palindrome number.\n";

    else cout<<"The number is not Palindrome number.\n";

}