#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int A[]={1,2,3,4,5};
    for(auto x : A){
        sum += x;
    }
    cout<<sum;
    int max,i;
     max = A[i];
    for(i = 0; i < 5; i++){
       
        if(A[i] > A[i + 1])
            max = A[i + 1];
    }
    cout<<max;
}