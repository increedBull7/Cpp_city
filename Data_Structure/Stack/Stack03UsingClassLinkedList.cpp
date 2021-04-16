#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

};


class Stack{
    Node *top;

    public:
    Stack(){top = nullptr;};
    void push(int data);
    void pop();
    void show();

};

int main(){
    Stack st;
    st.push(10);
    st.push(30);
    st.show();

    cout<<endl;

    st.pop();
    st.show();

    return 0;
}

void Stack::push(int data){
    Node *t;
    t = new Node;

    if(t == nullptr)
        cout<<"Stack is full!\n";

    else{
        t->data = data;
        t->next = top;
        top = t;
    }
}

void Stack::pop(){
    
    if(top == nullptr)
        cout<<"Stack is empty!!\n";
    else{
        Node *t = top;
        top = top->next;
        delete(t);
    }
}

void Stack::show(){
    Node *t = top;

    while(t != nullptr){
        cout<<t->data<<" ";
        t = t->next;
    }

}