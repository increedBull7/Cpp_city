#include<iostream>
#include <time.h>

using namespace std;

void bubble_sort(int parray[],int size);
//void selection_sort(int parray[],int size);


int main(){
    clock_t tStart = clock();

//**************************************
//Code to create Dynamic Array.
    cout<<"Enter the size of Array:";
    int size;
    cin>>size;
    int *parray = new int[size];
//**************************************




//*************************************************
//Code to insert random numbers in D.Array.
    int rdness;
    cout<<"Enter the upper limit of randomness:";
    cin>>rdness;

    for(int i = 0 ; i < size ; i ++)
        parray[i] = rand() % rdness;
//*************************************************




//****************************************************
//Code to print out the random Array
    char opt;
    cout<<"Do you want to see Random array? y/n ";
    cin>>opt;
    if(opt == 'y')
        for(int j = 0 ; j < size ; j++)
            cout<<parray[j]<<" ";
    else
        cout<<"Okay Moving on.....\n";

//*****************************************************  




    cout<<"Select the Sorting Algorithm:";
    cout<<"1 ---->> Bubble Sort  ---> Press b.\n";
    cout<<"2 ---->> Selection Sort -> Press s.\n";

    char algo_opt;
    cin>>algo_opt;

    switch(algo_opt){
        case 'b':    bubble_sort(parray,size);

        case 's':    //selection_sort(parray, size);

        default:     cout<<"Wrong...inputs.\n";
    }



    for(int loop = 0 ; loop <= size - 1 ; loop++)
        cout<<parray[loop]<<" ";

    
    printf("Time taken: %f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0 ;
}

void bubble_sort(int array[],int size){

    int round , temp;
    
    for(round = 1 ; round <= size - 1; round++)
        for(int i = 0 ; i <= size - 1 - round ; i++)
            if(array[i] > array[i + 1])
                {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }


}

/*
 
void selection_sort(int parray[],int size)
{

    int round;
    int idx;// Jo index value minni() function return usse idx mein karenge
    int temp;// Ye variable value swap karne ke liye hai
    int minni(int array[],int round, int size);


int minni(int array[],int round, int size)
{
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



    for(round = 0 ; round <= size - 1 ; round++){
        idx = minni(array, round, size);

        //*****************************
        //Is code se value swap hogi 
        temp = array[round];
        array[round] = array[idx];
        array[idx] = temp;
        //*****************************
    }
}

*/