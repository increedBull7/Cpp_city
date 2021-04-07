#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

vector<int> primeArray;

bool isPrime(int n);
void primeArrayGen(int n);

int main(){

    vector<int>::iterator priI;
    int n;
    int p1, p2 = 0;

    cout<<"Enter a number: ";
    cin>>n;

    primeArrayGen(n);


    for(int i = 0; i < primeArray.size();i++){
        for(int j = i + 1; j < primeArray.size();j++){
            if(primeArray[i] + primeArray[j] == n){
                cout<<"Sum found1\n"; 
                p1 = primeArray[i];
                p2 = primeArray[j];
            }     
        }
        if(primeArray[i] + primeArray[i] == n){
                cout<<"Sum found2\n";
                p1 = primeArray[i];
        }
    }
    
    if(p2 != 0){
        cout<<p1<<", "<<p2<<endl;
    }
    else 
    {
        cout<<p1<<", "<<p1<<endl;
    }
    


    //cout<<"No Sum Gotta check again!!!\n";
    // for(priI = primeArray.begin(); priI < primeArray.end(); priI++)
    //     cout<<*priI<<" ";

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
    for(int i = 2; i < n; i++)
        if(isPrime(i))
            primeArray.push_back(i);
}


