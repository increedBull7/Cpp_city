#include <time.h>
#include<stdio.h>

int minni(int array[],int round,int size);

int main() {
    clock_t tStart = clock();
    /* Do your stuff here */

    int array[]={12,5,7,31,4,8,11,22,99,22,4,76,76,45,444444,65,86,55,0,45,6,5,34,78,98,4,24,444};
    int size = sizeof(array)/4;
    int round;
    int idx;
    int temp;

    for(round = 0 ; round <= size - 1 ; round++){
        idx = minni(array, round, size);

        temp = array[round];
        array[round] = array[idx];
        array[idx] = temp;

    }

    for(int i = 0; i <= size - 1 ; i++)
        printf("%d ",array[i]);



    printf("Time taken: %f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;

} 


int minni(int array[],int round, int size){
    int MIN = array[round];
    int LOC = round;
    int j;

    for(j = round + 1; j <= size - 1; j++)
        if(MIN > array[j]){
            MIN = array[j];
            LOC = j;
        }
    return LOC;
}
