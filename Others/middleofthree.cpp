#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;

    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr,arr + 3);
    cout<<"Middle number is:"<<arr[1]<<endl;
    return 0;
 }