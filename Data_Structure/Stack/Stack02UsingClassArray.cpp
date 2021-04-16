#include<iostream>
using namespace std;



class Stack{
    int size;
    int top;
    int *S;

    public:
    Stack(){
        this->size = 5;
        this->top = -1;
        this->S = new int[this->size];
    }

    Stack(int size){
        this->size = size;
        this->top = -1;
        this->S = new int[this->size];
    }

    void push(int data);
    int pop();
    void display();
    
};

int main(){
    Stack st(4);
    st.push(23);
    st.push(34);
    st.push(45);
    st.display();
    cout<<endl<<st.pop()<<" "<<endl;

    st.display();


    return 0;
}

void Stack::push(int data){
    if(top == size - 1)
        cout<<"StackOverflow!!";
    else{
        top++;
        S[top] = data;
    }
}

int Stack::pop(){
    int x =  -1;

    if(top == -1){
        cout<<"StackUnderflow!!";
    }

    else{
        x = S[top];
        top--;
    }
    return x;
}

void Stack::display(){
    for(int x = top; x >= 0; x--)
        cout<<S[x]<<" ";
}