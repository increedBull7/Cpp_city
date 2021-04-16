#include <stdio.h>
#include<stdlib.h>

//*****************************
//This is the structure of a node.
    typedef struct node{
        int info;
        struct node *link;
    } node;
//*****************************


//*****************************
//Here the first pointer which points
//to the head is defined.
    node *START = NULL;
//*****************************


//*****************************
//This function creates a new Node. 
node* create_Node(){

    node *n;
    n = (node*)malloc(sizeof(node));
    return n;
}
//*****************************

//*****************************
//This code here will assign
//data to new node created by 
//create_Node()
void newNode(){
    node *temp , *t;
    temp = create_Node();
    printf("Enter the data(int):");
    scanf("%d",&temp->info);
    temp->link = NULL;

    if(START == NULL){
        START = temp;
    }
    else{
        t = START;
        while(t->link!=NULL)t = t->link;
        t->link = temp;
    }
}
//*****************************


//*****************************
//This is main() Ofcourse
    int main(){
        newNode();

    return 0;
}