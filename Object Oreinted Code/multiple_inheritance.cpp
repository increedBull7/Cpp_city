#include<iostream>
using namespace std;

class Human{
    public:
    Human(){
        cout<<"I am Human\n";
    }
};

class Male{
    public:
    Male(){
        cout<<"I am Male and I have Penis!\n";
    }
};

class Atul : public Human, public Male{
    public:
    Atul(){
        cout<<"Hello, This is Atul. A Computer Science Student.\n";
    }
};

int main(){
    Atul a1;

}