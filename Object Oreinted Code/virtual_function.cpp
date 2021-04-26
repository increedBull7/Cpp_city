#include<iostream>
using namespace std;

class Donkey{
    public:

    virtual void run(){
        cout<<"Running like a Donkey.\n";
    }
};

class Horse: public Donkey{
    public:

    void run(){
        cout<<"Running like a Horse.\n";
    }
};

int main(){
    Donkey *d= new Horse();
    d->run(); 


}