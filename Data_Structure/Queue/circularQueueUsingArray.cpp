#include<iostream>
using namespace std;

struct CQueue{
    int size;
    int front;
    int rear;
    int *CQ;
};

void createCQ(CQueue *cq, int size);
void enqueue(CQueue *cq,int data);
int dequeue(CQueue *cq);
void display(CQueue cq);
int main(){
    CQueue cute;
    createCQ(&cute,5);
    enqueue(&cute, 12);
    enqueue(&cute, 1122);
    enqueue(&cute, 111222);

    display(cute);

    dequeue(&cute);

    display(cute);



}

void createCQ(CQueue *cq, int size){
    cq->front = cq->rear = 0;
    cq->size = size;
    cq->CQ = new int[cq->size];
}


void enqueue(CQueue *cq,int data){

    int cirIndex = (cq->rear + 1) % cq->size;
    if(cirIndex == cq->front)
        cout<<"Queue is full\n";
    else{
        cq->rear = cirIndex;
        cq->CQ[cq->rear] = data;
    }

}


int dequeue(CQueue *cq){
    int cirIndex = (cq->front + 1) % cq->size;
    int x = -1;
    if(cq->front == cq->rear)
        cout<<"Queue is Empty!!\n";
    else{
        cq->front = cirIndex;
        x = cq->CQ[cq->front];
    }
    return x;
}


void display(CQueue cq){
    int i = cq.front + 1;
    do{
        cout<<cq.CQ[i]<<" ";
        i = (i + 1) % cq.size;
    }while(i != (cq.rear + 1) % cq.size);

    cout<<endl;

}
