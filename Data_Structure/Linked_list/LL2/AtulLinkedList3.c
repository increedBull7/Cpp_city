#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node * Atul = NULL;

void insert(int data);
void show();





int main(){

    insert(4);
    show();

    return 0;
}

void insert(int data){
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(!Atul)
        Atul = newNode;
    else{
        Node *temp = Atul;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void show(){
    Node *itter = Atul;

    while (itter->next != NULL){
        printf("%d->", itter->data);
        itter = itter->next;
    }
}