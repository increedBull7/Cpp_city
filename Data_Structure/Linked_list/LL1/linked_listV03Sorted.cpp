#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
};

Node *head = nullptr;

void create_LinkList(Node **head, int data);

void display_LinkList(Node *head);

void sorted_data(Node *head, int data);

int main(){

    int choice, data;

    while(1){
        cout<<"Add data in sorted order--> 1\n";
        cout<<"Display data--> 2\n";
        cout<<"Add data at sorted location--> 3\n";
        cout<<"Quit 0\n";
        cin>>choice;
        switch(choice){
            case 1: 
                cout<<"Enter data:"; cin>>data;
                cout<<"Adding data...";
                create_LinkList(&head, data);
                break;

            case 2:
                cout<<"Display:";
                display_LinkList(head);
                break;

            case 3:
                cout<<"Enter data:"; cin>>data;
                sorted_data(head, data);
                break;
            case 0:
                exit(1);
        }
    }
}


void create_LinkList(Node **head, int data){
    Node *ptr, *helper;

    ptr = new Node;

    ptr->data = data;
    ptr->next = nullptr;
    if(*head == nullptr)
        *head = ptr;
    else
    {
            helper = *head;
            while(helper->next != nullptr)
                helper = helper->next;
            helper->next = ptr;
    }
}

void display_LinkList(Node *head){
    while(head != nullptr){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl<<endl;
}

void sorted_data(Node *p, int data){

    Node *newNode, *tail = nullptr;
    newNode = new Node;
    newNode->data = data;

    if(p == nullptr)
        p = newNode;
    else{
        while(p && p->data < data){
            tail = p;
            p = p->next;
        }
        if(p == head){
            newNode->next = head;
            head = newNode;
        }
        else{
            newNode->next = tail->next;
            tail->next = newNode;
        }

    }
}


