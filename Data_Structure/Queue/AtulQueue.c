#include <stdio.h>
#include <stdlib.h>


typedef struct Queue{
    int size;
    int front;
    int rear;
    int * Q;
}Queue;

void createQueue(Queue * q, int size);
void enqueue(Queue * q, int data);
int dequeue(Queue * q);
void display(Queue q);


int main(){
    Queue qtr;

    createQueue(&qtr, 5);
    enqueue(&qtr, 55);
    enqueue(&qtr, 44);
    enqueue(&qtr, 33);
    enqueue(&qtr, 55);
    enqueue(&qtr, 44);
    enqueue(&qtr, 33);
    //display(qtr);
    // dequeue(&qtr);
    // display(qtr);



    return 0;
}

void createQueue(Queue * q, int size){
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->Q = (int *) malloc(size * sizeof(int));
}
void enqueue(Queue * q, int data){
    if(q->rear == q->size - 1){
        printf("Queue is full!\n");
    }
    else{
        q->rear ++;
        q->Q[q->rear] = data;
    }

}
int dequeue(Queue * q){
    int x = -1;
    if(q->rear == q->front){
        printf("Queue is empty!\n");
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void display(Queue q){

    for(int i = q.front + 1 ; i <= q.rear ; i++)
        printf("%d-->", q.Q[i]);
    
    printf("\n");
}