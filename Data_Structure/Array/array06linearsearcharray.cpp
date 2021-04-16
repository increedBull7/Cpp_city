#include<iostream>

using namespace std;

struct Array{
    int a[20];
    int size;
    int length;
};

void display(Array a);
int search(Array a,int data);

int main(){
    Array a1 = {{1,2,3,4,5}, 20, 5};
    
    //display(a1);
    cout<<search(a1,6);

}

void display(Array a){
    cout<<"Elements of Array:\n";

    for(int i = 0; i < a.length; i++)
        cout<<a.a[i]<<"--";
     
    cout<<"end"<<endl;
}

int search(Array a,int data){
    for(int i = 0; i < a.length; i++){
        if(data == a.a[i])
            return i;
}
return -1;
}