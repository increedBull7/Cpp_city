#include<iostream>

using namespace std;

struct Array{
    int a[20];
    int size;
    int length;
};

void display(Array a);
void append(Array *a, int data);
void insert(Array *a, int data, int index);

int main(){
    Array a1 = {{1,2,3,4,5}, 20, 5};
    display(a1);
    append(&a1, 54);
    display(a1);
    insert(&a1, 4, 3);
    display(a1);


}

void display(Array a){
    cout<<"Elements of Array:\n";

    for(int i = 0; i < a.length; i++)
        cout<<a.a[i]<<"--";
     
    cout<<"end"<<endl;
}

void append(Array *a, int data){
    if(a->length < a->size)
        a->a[a->length++] = data;  
}

void insert(Array *a, int data, int index){
    if(index >= 0 && index <= a->length){

        for(int i = a->length; i > index; i--){
                a->a[i] = a->a[i - 1];
        }
        a->a[index] = data;
        a->length++;

    }
}
