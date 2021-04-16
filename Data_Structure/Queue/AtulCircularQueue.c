#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int size;
    int rear;
    int front;
    int *Q;
}Queue;

void create(Queue *q, int size);
void enqueue(Queue *q, int data);
int dequeue(Queue *q);
void display(Queue q);


int main(){
    Queue qtter;

    create(&qtter, 6);
    enqueue(&qtter, 1);
    enqueue(&qtter, 2);
    enqueue(&qtter, 3);
    enqueue(&qtter, 4);
    enqueue(&qtter, 5);
    display(qtter);
    dequeue(&qtter);
    dequeue(&qtter);
    dequeue(&qtter);
    display(qtter);
    return 0;
}



void create(Queue *q, int size){
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->Q = (int *) malloc(q->size * sizeof(int));

}
void enqueue(Queue *q, int data){
    if((q->rear + 1) % q->size == q->front)
        printf("Queue is full!!\n");

    else{
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = data;    
    }

}
int dequeue(Queue *q){
    int x = -1;
    if(q->rear == q->front)
        printf("Queue is empty!!\n");

    else{
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front]; 
    }
    return x;
}
void display(Queue q){
    for(int x = q.front + 1; x <= q.rear; x++)
        printf("%d-->", q.Q[x]);

    printf("\n");
}