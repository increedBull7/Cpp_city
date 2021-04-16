#include<iostream>

using namespace std;

struct Array{
    int a[20];
    int size;
    int length;
};

void display(Array a);
bool binarySearch(Array a, int data);


int main(){
    Array a1 = {{1,2,3,4,5,54,56,87,98,99,111}, 20, 11};
    
    display(a1);
    cout<<binarySearch(a1,98);


}

void display(Array a){
    cout<<"Elements of Array:\n";

    for(int i = 0; i < a.length; i++)
        cout<<a.a[i]<<"--";
     
    cout<<"end"<<endl;
}


bool binarySearch(Array a, int data){

    int low = 0;
    int high = 10;
    int mid = 0;
        while(low <= high){
            mid = (high + low)/2;

            if(data == a.a[mid])
                return true;                
            else if(data < a.a[mid])
                high = mid - 1;
            else
                low = mid + 1;
    }
    return false;
}