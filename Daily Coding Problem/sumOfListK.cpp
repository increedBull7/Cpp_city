#include<iostream>

using namespace std;


int* sumOfListK(int array[], int k);

int main(){

    int list[] = {1,2,3,4,5};
    int k = 9;
    sumOfListK(list,k);
//probably aaise nahi hoga ye


    return 0;
}

int* sumOfListK(int array[], int k){

    int size = sizeof(array) / sizeof(array[0]);
    cout<<size;

}