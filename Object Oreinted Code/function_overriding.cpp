#include<iostream>
using namespace std;

class Base{

    public:
    void display(){
        cout<<"Function of Base Class.\n";
    }
};

class Derived: public Base{

    public:
    void display(){
        cout<<"Function of Derived.\n";
    }
};

int main(){

    Derived d;
    d.display();
    d.Base::display();
}