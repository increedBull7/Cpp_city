#include<stdio.h>

int main(){
    int number, *pointer;
    number = 69;
    pointer = &number;
   printf("%d\n",pointer);
   printf("%d\n",pointer + 1);

}