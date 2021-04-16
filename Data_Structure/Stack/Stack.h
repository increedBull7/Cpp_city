#include<iostream>
using namespace std;


template<class T>
class Stack{
    int size;
    int top;
    T *S;

    public:
    Stack(){
        this->size = 5;
        this->top = -1;
        this->S = new T[this->size];
    }

    Stack(int size){
        this->size = size;
        this->top = -1;
        this->S = new T[this->size];
    }

    void push(T data);
    T pop();
    void display();
    int isEmpty();
    int topR();
    
};

template<class T>
void Stack<T>::push(T data){
    if(top == size - 1)
        cout<<"StackOverflow!!";
    else{
        top++;
        S[top] = data;
    }
}

template<class T>
T Stack<T>::pop(){
    T x =  -1;

    if(top == -1){
        cout<<"StackUnderflow!!";
    }

    else{
        x = S[top];
        top--;
    }
    return x;
}

template<class T>
void Stack<T>::display(){
    for(int x = top; x >= 0; x--)
        cout<<S[x]<<" ";
}

template<class T>
int Stack<T>::isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}

template<class T>
int Stack<T>::topR(){
    return this->top;
}