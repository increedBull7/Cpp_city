#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
};

Node * one = nullptr;
Node * second = nullptr;

void create_LinkList(Node **head, int data);

void display_LinkList(Node *head);

void concatinate(Node **one,Node *second);


int main(){

    int choice, list, data;

    while(1){
        cout<<"Add data    --> 1\n";
        cout<<"Display data--> 2\n";
        cout<<"Concatinate --> 3\n";
        cout<<"Quit 0\n";
        cin>>choice;
        switch(choice){
            case 1: 
                cout<<"Insert in:\n";
                cout<<"1:First list.\n";
                cout<<"2:Second list.\n";
                cin>>list;
                switch (list){
                case 1:
                    cout<<"List: One selected.\n";
                    cout<<"Enter data:"; cin>>data;
                    create_LinkList(&one, data);
                    cout<<"Adding data...\n";
                    break;

                case 2:
                    cout<<"List: Second selected.\n";
                    cout<<"Enter data:"; cin>>data;
                    create_LinkList(&second, data);
                    cout<<"Adding data...\n";
                    break;
                }
                break;


            case 2:
                cout<<"Display:\n";
                cout<<"1:First list.\n";
                cout<<"2:Second list.\n";
                cin>>list;
                switch(list){
                    case 1:
                        display_LinkList(one);
                        break;
                    case 2:
                        display_LinkList(second);
                        break;
                }
                break;

            case 3:
                cout<<"Concatinating Lists...\n";
                concatinate(&one, second);
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

void concatinate(Node **one,Node *second){
    Node *ptr;
    ptr = *one;

    while(ptr->next != nullptr)
        ptr = ptr->next;
    ptr->next = second;

}