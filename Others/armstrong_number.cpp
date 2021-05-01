#include<iostream>
using namespace std;
int main(){

    int i, n, r,arm_num = 0, m;
    cout<<"Enter a number:"; cin>>n;
    m = n;
    while(n > 0){
        r = n % 10;
        n = n / 10;
        arm_num += r * r * r;
    }
    if(m == arm_num)
        cout<<"Number is armstrong number.\n";

    else cout<<"Number is not armstrong number.\n";
}