#include<iostream>

using namespace std;


int *primeArray;
bool isPrime(int n);
void primeArrayGen(int n);



int main(){

    cout<<"Enter a number: ";

    int n;
    cin>>n;

    primeArrayGen(n);


    for(int i = 0; *primeArray == NULL; i++)
        cout<<primeArray[i];



    return 0;
}


bool isPrime(int n){
    int primer = 0;
    for(int i = 2; i < n + 1; i ++)
        if(n % i == 0)
            primer++;
    return (primer == 1)?1:0;    
}


void primeArrayGen(int n){
    int primeCount = 0;
    for(int i = 3; i < n; i++)
        if(isPrime(i))
            primeCount++;

    primeArray = new int[primeCount];
    int i, j;
    for(i = 3,j = 0; i < n && j < primeCount; i++)
        if(isPrime(i))
            primeArray[j++] = i;
}


