#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout<<"From function \na = "<<x<<"\nb = "<<y<<endl;
    
}

int main(){

    int a = 9, b = 8;

    swap(&a,&b);
    cout<<"From main \na = "<<a<<"\nb = "<<b<<endl;


}