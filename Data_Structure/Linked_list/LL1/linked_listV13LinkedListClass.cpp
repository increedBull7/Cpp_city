#include<iostream>
using namespace std;



class Node{
    public:
        int data;
       class Node *next;
};

class LinkedList{

    class Node *first;
    public:
    LinkedList(){first = nullptr;}
    LinkedList(int a[], int n);
    ~LinkedList();
    void display();
    void insert(int loc, int data);
    void deletee(int loc);
    int length();
};

int main(){
    //******************************
    //Getting list
    int data;
    cout<<"Enter size of List:";
    int size;
    cin>>size;
    int *arr = new int[size];

    for(int i = 0 ; i < size; i++){
        cout<<"Enter "<<i + 1<<"th element:";
        cin>>data;
        arr[i] = data;
    }
    //******************************

    LinkedList l1(arr,size);
    l1.display();


        
}

LinkedList::LinkedList(int a[], int n){
    Node * ptr, * helper;

    first = new Node;
    first->data = a[0];
    first->next = nullptr;
    ptr = first;

    for(int i = 1; i < n; i++){
        helper = new Node;
        helper->data = a[i];
        helper->next = nullptr;
        ptr->next = helper;
        ptr = helper;
    }

}

void LinkedList::display(){
    Node *ptr = first;

    while(ptr){
        cout<<ptr->data<<"-->";
        ptr = ptr->next;
    }
    if(ptr->next == nullptr)
        cout<<"null\n";
}

void LinkedList::insert(int loc, int data){
    Node *ptr, *helper = first;
    

    if(loc < 0 || loc > length())
        return;

    
    ptr = new Node;
    ptr->data = data;
    ptr->next = nullptr;


    if(loc == 0)
        first = ptr;

    else{
        for(int i = 1; i < loc - 1; i++)
            helper = helper->next;

        ptr->next = helper->next;
        helper->next = ptr;   
    }
      
    
}

LinkedList::~LinkedList(){
    Node *ptr = first;

    while(first){
        first = first->next;
        delete(ptr);
        ptr = first;
    }
}

int LinkedList::length(){
    Node * ptr = first;
    int len = 0;

    while(ptr){
        len++;
        ptr = ptr->next;
    }
    return len;
}

void LinkedList::deletee(int loc){
    Node * p , *q = nullptr;

    int x = -1;

    if(loc < 0 || loc > length())
        return;

    if(loc == 1){
        p = first;
        first = first->next;
        delete p;

    }
    else{
        p = first;

        for(int i = 0; i < loc - 1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;

    }

}

