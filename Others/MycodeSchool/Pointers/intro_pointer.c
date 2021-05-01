/*
1 byte = 8 bits

*/

#include<stdio.h>

int main(){
    int number;
    int *pointer;
    number = 69;
    pointer = &number;

    printf("%d\n",number);
    printf("%f\n",&number);
}