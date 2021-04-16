#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *head = NULL;

void create(int A[], int n){
    Node *temp, *last;
    head = (Node*) malloc(sizeof(Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i < n; i++){
        temp = (Node*) malloc(sizeof(Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;

    }
}

void display(Node *p){
    while(p){
        printf("%d-->",p->data);
        p = p->next;
    }
}

int main(){
    int A[]={1,2,3,4,5,6,7,8,9,10};
    create(A, 10);
    display(head);

    return 0;
}