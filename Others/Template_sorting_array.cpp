/*Define a function template for sorting an array. Write main() function to
 sort an integer array and to sort floating point number array.*/

#include<iostream>
using namespace std;

template <class U> 
void sort(U array[],int size){

    int round;
    U temp;


    for(round = 1 ; round <= size - 1; round++)
        for(int i = 0 ; i <= size - 1 - round ; i++)
            if(array[i] > array[i + 1])
                {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }
}

int main(){

    int Arrrey_int[] = {12,3,45,7,45,68,34,7};
    float Arrrey_float[] = {12.3, 1.8, 4.2, 6.8, 23.77, 7.33, 14.65, 12.45};

    int size_int = sizeof(Arrrey_int) / sizeof(int);
    int size_float = 6;//sizeof(Arrrey_float)/ sizeof(float);

    sort(Arrrey_int, size_int);
    sort(Arrrey_float, size_float);


    for(int i = 0; i < size_int; i++)
        cout<<Arrrey_int[i]<<" ";
    cout<<endl;
    
    for(int i = 0; i < size_int; i++)
        cout<<Arrrey_float[i]<<" ";


    
}