#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

Node *head = nullptr;

void create_List(Node **head, int data);

void display_list(Node *head);

void count_Nodes(Node *head);

void sum_of_Nodes(Node *head);

void maximun_Node(Node *head);

void search_Node(Node *head, int element);

void insert_Node(Node *head, int data, int location);

int main(){
    
    int array[10] = {12,23,34,45,56,67,78,21,32,43};

    for(int i = 0; i < 10; i++)
        create_List(&head, array[i]);

    
    display_list(head);
    count_Nodes(head);
    sum_of_Nodes(head);
    maximun_Node(head);
    search_Node(head, 21);
    insert_Node(head, 420, 0);
    display_list(head);

}

void create_List(Node **head, int data){
    Node *newNode, *helper;

    newNode = new Node;

    newNode->data = data;
    newNode->next = nullptr;

    if(*head == nullptr)
        *head = newNode;
    else{
        helper = *head;

        while(helper->next != nullptr)
            helper = helper->next;

        helper->next = newNode;
    }
}

void display_list(Node *head){
    cout<<"<--* Displaying List *-->\n";

    while(head != nullptr){
        cout<<head->data<<"-->";
        head = head->next;
        if(head == nullptr)
            cout<<"null\n";
    }
}

void count_Nodes(Node *head){
    int count = 0;
    while(head != nullptr){
        count++;
        head = head->next;

    }
    cout<<count<<" Nodes\n";
}

void sum_of_Nodes(Node *head){
    int sum = 0;
    while(head != nullptr){
        sum += head->data;
        head = head->next;
    }
    cout<<"Sum is:"<<sum<<endl;
}

void maximun_Node(Node *head){
    int max = head->data;

    while(head != nullptr){
        if(head->data >= max)
            max = head->data;
        head = head->next;
    }
    cout<<"Maximum Node:"<<max<<endl;

}

void search_Node(Node *head, int element){
    int countNode = 0;
    while(head != nullptr){
        countNode++;

        if(head->data == element){
            cout<<"Yes element found!\n"<<"At Node:"<<countNode<<endl; 
            exit(1);
        }

        head = head->next;
    }
    cout<<"Not Found!\n";
}

void insert_Node(Node *count, int data, int location){

    // if(location < 0 || location > 10)
    //     return;


    Node *newNode;
    newNode = new Node;
    newNode->data = data;


    if(location == 0){
        newNode->next = head;
        head = newNode;
    }
    else{
        
        for(int i = 0; i < location - 1 ; i++)
            count = count->next;
        newNode->next = count->next;
        count->next = newNode;
    
    }

}



