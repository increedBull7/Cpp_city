#include<iostream>

using namespace std;

int main(){

    cout<<"Enter Number: ";
    int n = 4;
    cin>>n;

    int primer = 0;

    for(int i = 2; i < n + 1; i++)
        if(n % i == 0)
            primer++;
    
    
    if(primer == 1)
        cout<<n<<"is Prime!!\n";
    else
        printf("%d is Not Prime!!!\n",n);
    
    
    return 0;
}