#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

Node *head = NULL;

void insert(int data);
void removee(int data);
void display();

int main(){

    insert(3);
    insert(4);
    insert(5);
    display();
    removee(4);
    display();
    insert(6);
    display();


    return 0;
}

void insert(int data){

    Node *itter;
    Node *temp;

    temp = (Node *) malloc(sizeof(Node));
    
    temp->data = data;
    temp->next = NULL;

    if(!head)
        head = temp;
    else{
        itter = head;
        while(itter->next){
            itter = itter->next;
        }
        itter->next = temp;
    }
}


void removee(int data){

    Node *itter = head;
    Node *prev = NULL;

    while(itter->next){
        if(itter->data == data)
            if(prev == NULL)
                head = itter->next;
            else
                prev->next = itter->next;
        prev = itter;
        itter = itter->next;
                
    }


}
void display(){
    Node *itter = head;
    while(itter){
        if(itter->next)
            printf("%d-->", itter->data);
        else printf("%d--**",itter->data);
        itter = itter->next;
    }
    printf("\n");

}
