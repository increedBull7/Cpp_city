#include<iostream>
using namespace std;


int linear_search(int array[], int size, int key){

    for(int i = 0; i < size; i++)
        if(array[i] == key)
            return i;
    
    return -1;
}

int main(){

    int array[10];

    for(int x = 0; x < 10; x++)  
        array[x] = x +1;

    cout<<linear_search(array, 10, 6);


}