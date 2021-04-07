#include <iostream>

using namespace std;


void insertion_sort(int A[], int size);


int main(){

    int numbers[] = {23,1,45,22,18};

    insertion_sort(numbers, 5);

    for(int i = 0; i < 5; i++)
        cout<<numbers[i];


    return 0;
}


void insertion_sort(int A[], int size){

    int i, key;
    for(int j = 1; j <= size; j++){
        key = A[j];
        i = j - 1;

        while(i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i++;
        }
        A[i + 1] = key;

    }






}