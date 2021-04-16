#include<iostream>
#include<string>

using namespace std;

struct Node{
    int data;
    struct Node * next;
};

Node *head = nullptr;

void create_LinkList(Node **head, int data);

void display_LinkList(Node *head);

void insert_data(Node *head, int data, int loc);

void reverseLinkedList(Node **head);

int main(){

    int choice, data;
    string name;
    


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
