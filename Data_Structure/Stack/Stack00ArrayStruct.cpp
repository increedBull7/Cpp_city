#include<iostream>
#include<stdlib.h>

using namespace std;

struct Stack{
    int size;
    int top;
    int *S;
};

void create(Stack *S){
    cout<<"Enter the size:";
    cin>>S->size;

    //S->S = (int *) malloc(S->size * sizeof(int));
    S->S = new int[S->size];
    S->top = -1;
}

void display(Stack S){
    int i ;
    for(i = S.top; i >= 0; i--)
        cout<<S.S[i]<<" ";

    cout<<endl;
}

void push(Stack *S, int data){
    if(S->top == S->size -1)
        cout<<"Stack overflow\n";
    else
    {
        S->top++;
        S->S[S->top] = data;
    }
    
}

int pop(Stack *S){
    int data = -1;
    if(S->top == -1)
        cout<<"Stack Underflow\n";
    else{
        data = S->S[S->top];
    
        S->top--;
    }
    return data;
}


int peek(Stack S, int index){
    int x = -1;
    if(S.top - index + 1 < 0 )
        cout<<"Invalid index\n";
    x = S.S[S.top - index + 1];

    return x;
}


int isEmpty(Stack S){

    if(S.top == -1)
        return 1;

    return 0;
}

int isFull(Stack S){
    if(S.top == S.size - 1)
        return 1;

    return 0;
}


int stackTop(Stack S){
    if(!isEmpty(S))
        return S.S[S.top];

    return -1;
}

int main(){

    Stack st;

    create(&st);

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);

    display(st);

    pop(&st);

    display(st);

    cout<<"Stack is empty: "<<isEmpty(st)<<endl;
    cout<<"Stack is full: "<<isFull(st)<<endl;
    cout<<"Peeking at 3: "<<peek(st, 1)<<endl;


}