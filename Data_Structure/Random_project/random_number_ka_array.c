#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[200];
    srand(0);
    for(int i = 0 ; i < 200 ; i++)
        array[i] = rand() % 200;

    //for(int j = 0 ; j < 200 ; j++)
    printf("%d ",array[4]);

    return 0;
}