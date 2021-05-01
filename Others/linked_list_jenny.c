#include<stdio.h>


struct node{
    int data;
    struct node *next;
};

struct node *head, *temp, new_node;

*head = NULL;


int main(){

    int choice = 1;


    while(choice){
    new_node =(struct node *) malloc(sizeof(node));

    printf("Enter data:");
    scanf("%d",&new_node -> data);

    new_node -> next = 0;
    if(head == 0)
        head = temp = new_node ;
    else
    {
        temp -> next = new_node;
        temp = new_node;
    }
    
    printf("Do you want add new data?(0/1)");
    scanf("%d",&choice);

    }

    temp = head;

    while(temp != NULL){

        printf("%d",temp -> data);
        temp = temp -> next;
    }

}