#include<iostream>

using namespace std;


struct Queue {

    int front;
    int rear;
    int size;
    int *Q;
};

void createQueue(Queue *q, int size);
void enqueue(Queue *q, int data);
int dequeue(Queue *q);
void displauQueue(Queue q);

int main(){

    Queue qt;
    createQueue(&qt,5);
    enqueue(&qt,11);
    enqueue(&qt,22);
    enqueue(&qt,33);

    displauQueue(qt);

    dequeue(&qt);

    displauQueue(qt);



}


void createQueue(Queue *q, int size){
    q->front = q->rear = -1;
    q->size = size;
    q->Q = new int[q->size];
}


void enqueue(Queue *q, int data){
    if(q->rear == q->size - 1)
        cout<<"Queue is full!!\n";
    else{
        q->rear++;
        q->Q[q->rear] = data;
    }
}


int dequeue(Queue *q){
    int x = -1;
    if(q->front == q->rear)
        cout<<"Queue is empty!!\n";
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}


void displauQueue(Queue q){
    for(int i = q.front + 1; i <= q.rear; i++)
        cout<<q.Q[i]<<" ";
    
    cout<<endl;
}

