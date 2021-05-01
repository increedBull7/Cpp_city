#include<iostream>

using namespace std;

int main(){

    int arr[3]={11,23};
    int temp;

        temp = arr[0];

        arr[0] = arr[1];

        arr[1] = temp;

    for(int i = 0; i < 4 ; i++){
         cout<<arr[i]<<endl;

    }    
       return 0;
}