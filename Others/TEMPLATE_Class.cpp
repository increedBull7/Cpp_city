#include<iostream>
using namespace std;


//Template class declaration
template <class P>
class Arraylist{
    private:
    struct controlBlock{
        int capacity;
        P *arr_ptr;
    };
    
    controlBlock *s;

    public:
    Arraylist(int capacity){

        s = new controlBlock;
        s -> capacity = capacity;
        s -> arr_ptr = new P[s -> capacity];

    }

    void addElement(int index, P data){
        if(index >= 0 && index < s -> capacity)
            s -> arr_ptr[index] = data;
        
        else
            cout<<"Invalid Index."<<endl;

    }

    void viewElement(int index){
        if(index >= 0 && index < s -> capacity)
            cout<<s -> arr_ptr[index]<<endl;

        else
        {
            cout<<"Invalid Index."<<endl;
        }
        
    }
};

int main(){
    Arraylist <int>lister(3);
    lister.addElement(0,420);
    lister.viewElement(0);

}