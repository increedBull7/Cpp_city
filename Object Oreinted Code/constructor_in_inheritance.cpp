#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Constructor of Base Class\n";
    }

    Base(int x){
        cout<<"Param Con of Base Class:"<<x<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"Constructor of Derived Class\n";
    }
    Derived(int y){
        cout<<"Param Con of Derived Class:"<<y<<endl;
    }
};

class AgainDerived : public Derived{
    public:
    AgainDerived(){
        cout<<"Constructor of AgainDerived Class\n";
    }
    AgainDerived(int y){
        cout<<"Param Con of AgainDerived Class:"<<y<<endl;
    }
};


int main(){
   // Base b, b2(4);
   // Derived d(9);
   AgainDerived ad;


    

}