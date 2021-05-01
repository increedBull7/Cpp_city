#include<iostream>
using namespace std;
int main(){
    int A[10] = {1,2,12,13,24,34,44,45,47,56};

    int start = 0 , end = 9, mid, num;
    cout<<"Enter a number to be searched:"; cin>>num;

    while(start <= end){
    mid = (start + end)/2;
    if(num == A[mid]){
        cout<<"Found at "<<mid<<endl;
        return 0;
    }
    else if(num <= A[mid])
        end = mid - 1;
    else start = mid + 1;
    }
    cout<<"No match!!\n";
    return 0;
}