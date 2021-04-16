#include<iostream>

using namespace std;


int main(){
    string A = "mum";
    int i, j;
    j = A.length();

    for(i = 0, j = A.length(); i < j; i++, j--){
        if(A[i] != A[j])
            break;
    }
}