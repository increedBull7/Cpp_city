#include<iostream>
using namespace std;

void bubble_sort(int array[],int size);

int main(){
    int size;
    int array[1000];
    cout<<"Enter the number of elements of array:";
    cin>>size;
     array[size];
    for(int i = 0; i<size ;i++){
        cout<<"Enter the "<<i+1<<" value:";
        cin>>array[i];
    }


    bubble_sort(array,size);

    for(int loop = 0 ; loop <= size - 1 ; loop++)
        cout<<array[loop]<<" ";

    return 0;
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