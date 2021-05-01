#include<iostream>
using namespace std;
void pirint_num(int n);

int main(){

    cout<<"Enter number:";
    int num;
    cin>>num;
    pirint_num(num);

}

    void pirint_num(int n){
        cout<<n;
        if(n == 0)
            exit(0);
            
        pirint_num(n - 1);

    }

