#include<iostream>

struct Node
{
    int data;
    struct Node * next;
};

Node *intList = nullptr;
Node *evenList = nullptr;
Node *oddList = nullptr;

void createNode(Node **intlist, int data);
void displayList(Node *head);
void splitList(Node *intList, Node *evenList, Node *oddList);


using namespace std;

int main(){
    int choice, data;
    int lList;


    while(1){
        cout<<"*******************************\n";
        cout<<"* Add an integer List :: 1    *\n";
        cout<<"* Display List        :: 2    *\n";
        cout<<"* Split the List      :: 3    *\n";
        cout<<"* Quit                :: 4    *\n";
        cout<<"*******************************\n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Inserting data in Integer List***\n";
                cout<<"Enter data:";
                cin>>data;
                createNode(&intList, data);
                break;

            case 2:
                cout<<"Choose List:\n";
                cout<<"1. Intger List\n";
                cout<<"2. Odd List\n";
                cout<<"3. Even List\n";
                cin>>lList;

                switch(lList){
                case 1:
                    displayList(intList);
                    break;
                case 2:
                    displayList(oddList);
                    break;
                case 3:
                    displayList(evenList);
                    break;
                default:
                    cout<<"Sorry, Not such List exist.\n";
                }
                break;

            case 3:
                cout<<"Spliting the list...\n";
                splitList(intList, evenList, oddList);
                cout<<"List Splited Sucessfully!\n";
                break;

            case 4:
                exit(1);

        }

    }
   
}

void createNode(Node **head, int data){
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

void displayList(Node *head){
    
    while(head != nullptr){
        cout<< head->data <<"-->";
        head = head->next;
    }
    if(head->next == nullptr)
        cout<<"nullptr\n";
}

void splitList(Node *intList, Node *evenList, Node *oddList){

    while(intList != nullptr){
        if(intList->data % 2 == 0)
            createNode(&evenList, intList->data);
        else
        {
            createNode(&oddList, intList->data);
        }
        intList = intList->next;
        
    }
}