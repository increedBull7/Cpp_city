#include<iostream>
#define A_SIZE 10
using namespace std;


struct Node{
    int data;
    struct Node *next;
};

Node *head = NULL;

void create_List(Node **head,int data);

void display_List(Node *head);


int main(){

    //int array[A_SIZE] = {12,23,43,56,23,1,67,5,897,5};

   // for(int i = 0; i < A_SIZE; i++)
        create_List(&head, 23);

    display_List(head);

}

void create_List(Node **head, int data){

    Node *newNode, *helper;

    newNode = new Node;

    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
        *head = newNode;
    else{
        helper = *head;
        while(helper->next != NULL)
            helper = helper->next;
        
        helper->next = newNode;
    }
}

void display_List(Node *viewer){
    while(viewer != NULL){
        cout<<viewer->data<<" ";
        viewer = viewer->next;
    }
}
