#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
};

Node *head = nullptr;

void create_LinkList(Node **head, int data);

void display_LinkList(Node *head);

void insert_data(Node *head, int data, int loc);

void delete_Node(Node *head, int node);

int main(){

    int choice, data;

    while(1){
        cout<<"Add data--> 1\n";
        cout<<"Display data--> 2\n";
        cout<<"Add data at --> 3\n";
        cout<<"Delete node--> 4\n";
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
                cout<<"Enter location:"; int loc; cin>>loc;
                cout<<"Enter data:"; cin>>data;
                insert_data(head, data, loc);
                break;

            case 4:
                cout<<"Enter node number:"; cin>>loc;
                delete_Node(head, loc);
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
    cout<<endl;
}

void insert_data(Node *head, int data, int loc){
    Node *ptr, *helper;
    ptr = new Node;
    ptr->data = data;

    if(loc == 0){
        head->next = ptr->next;
        ptr = head;
    }
    else{
        helper = head;
        for(int i = 0; i < loc - 1; i++){
            helper = helper->next;
        }
        ptr->next = helper->next;
        helper->next = ptr;

    }
}

void delete_Node(Node *head, int pos){
    Node *ptr, *tail;
    ptr = head;
    tail = nullptr;

    if(pos == 1){
        head = ptr->next;
        delete(ptr);
    }
    else{
        for(int i = 0;i < pos -1;i++){
            tail = ptr;
            ptr = ptr->next;
        }
        tail->next = ptr->next;
        delete(ptr);
    }
}
