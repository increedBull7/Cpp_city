#include<iostream>

using namespace std;

struct Node{
    int data;
    Node * top;
};

Node *top = nullptr;

void push(int data);
void pop();
void show();
void isEmpty();
void isFull();
int peek(int index);


int main(){

    push(32);
    push(43);
    push(45);
    show();
    pop();
    cout<<endl;
    show();
    isEmpty();
    isFull();
    cout<<peek(2);
}

void push(int data){
    Node *ptr;
    ptr = new Node;

    if(ptr == nullptr){
        cout<<"Stack is full\n";
    }
    else{
        ptr->top = top;
        ptr->data = data;
        top = ptr;
    }
}

void pop(){
    if(top == nullptr)
        cout<<"Stack is empty!";

        
    Node *ptr;
    ptr = top;
    top = ptr->top;
    delete(ptr);
}

void show(){
    Node *ptr;
    ptr = top;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->top;
    }
}

void isEmpty(){
    if(top == nullptr)
        cout<<"Stack is empty!\n";
    cout<<"Not empty!\n";
}

void isFull(){
    if(!top)
        cout<<"Stack is full!\n";
    cout<<"Stack is not full!\n";
}

int peek(int index){

    int x = -1;
    Node *ptr = top;

    for(int i = 1; i < index && ptr != nullptr; i++)
        ptr = ptr->top;

    if(ptr != nullptr)
        return ptr->data;
    return x;
}

