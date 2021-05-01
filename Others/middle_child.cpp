#include<iostream>

using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;

    if(a >= b && a <= c ||a <= b && a >= c)
        cout<<a;
    if (b >= a && b <= c || b <= a && b >= c )
        cout<<b;
    else 
        cout<<c;

    return 0;
}