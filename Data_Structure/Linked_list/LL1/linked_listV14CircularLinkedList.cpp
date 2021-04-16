#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

Node *first;

void createCircularList(int a[],int size);

void display(Node *head);



int main(){
    cout<<"Enter the size of Circular List:";
    int size;
    int data;
    cin>>size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++){
        cout<<"Enter the "<<i + 1<<"th element:";
        cin>>data;
        arr[i] = data;
    }
    display(first);

}

void createCircularList(int a[],int size){
    Node * last, * t;

    first = new Node;
    first->data = a[0];
    first->next = first;
    last = first;

    for(int i = 1; i < size; i++){
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }

}


void display(Node *head){
    do{
        cout<<head->data<<"-->";
        head = head->next;

    }while(head != first);
    cout<<endl;
}
