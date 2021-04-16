#include<iostream>
using namespace std;

class Queue{
    int size;
    int front;
    int rear;
    int *Q;

    public:
    Queue(){
        size = 10;
        front = rear = -1;
        Q = new int[size];
    }

    Queue(int size){
        this->size = size;
        front = rear = -1;
        Q = new int[this->size];
    }

    void enqueue(int data);
    int dequeue();
    void display();
};

int main(){
    Queue qt(5);
    qt.enqueue(11);
    qt.enqueue(22);
    qt.enqueue(33);

    qt.display();

    qt.dequeue();

    qt.display();

}

void Queue::enqueue(int data){
    if(rear == size - 1)
        cout<<"Queue is full!!\n";
    else{
        rear++;
        Q[rear] = data;
    }
}


int Queue::dequeue(){
    int x = -1;
    if(front == rear)
        cout<<"Queue is empty!!\n";
    else{
        front++;
        x = Q[front];
    }
    return x;
}


void Queue::display(){
    for(int i = front + 1; i <= rear; i++)
        cout<<Q[i]<<" ";
    
    cout<<endl;
}