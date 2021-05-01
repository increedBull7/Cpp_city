#include<iostream>
using namespace std;

int main(){

    int i = 1, n;
    cout<<"Enter the number:"; cin>>n;

    while(i <= 10){
        cout<<n<<" X "<<i<<" = "<<i * n<<endl;
        i++;
    }
    return 0;
}