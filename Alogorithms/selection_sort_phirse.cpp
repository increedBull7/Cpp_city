/* SELECTION SORT
    Working Logic----->>
    1= Select the smallest value from the list.
    2= Swap the smallest value for the first value of the list.
    3= Again select the smallest value from the list, but this time exclude the first value.
    4= Swap this value with the second value of the list.
    5= Keep doing this N - 1 times to sort the list, N is the size of the list.
 */

#include<iostream>

using namespace std;

int minni(int array[],int round,int size);//Ye minni() function array se sabse smallest value ke index return karga

int main(){

    int array[]={12,5,7,31,4,8,11,22,99,22,4,76,76,45,444444,65,86,55,0};//array
    int size = sizeof(array)/4; // array ka size. Agar sizeof() function mein array pass karen toh array ka size aata
                                // hai us size ko agar 4 is divide karde toh number of elements aa jata hai...
    int round;
    int idx;// Jo index value minni() function return usse idx mein karenge
    int temp;// Ye variable value swap karne ke liye hai

    for(round = 0 ; round <= size - 1 ; round++){
        idx = minni(array, round, size);

        //*****************************
        //Is code se value swap hogi 
        temp = array[round];
        array[round] = array[idx];
        array[idx] = temp;
        //*****************************
    }

    //**************************************
    //For printing the sorted array
    for(int i = 0; i <= size - 1 ; i++)
        cout<<array[i]<<" ";
    //**************************************
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