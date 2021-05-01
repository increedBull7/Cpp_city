#include<iostream>
using namespace std;
int main(){

    int m = 35, n = 21;

    while(m != n){
        if(m > n)
            m -= n;
        else n -= m;
    }

    cout<<m<<n;

}