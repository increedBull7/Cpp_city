#include<stdio.h>
#include<stdlib.h>

int main(){
    srand(2);
    for(int i = 0 ; i < 200 ; i++)
        printf("%d ",rand() % 20000);

    printf("######################################################\n");
    return 0;
}