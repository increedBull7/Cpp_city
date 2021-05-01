#include<iostream>
using namespace std;
void Atul();
void Prachi();

void Atul(){
    cout<<"This is Atul.\n";
    Prachi();
}

void Prachi(){
    cout<<"This is Prachi.\n";
    
    Atul();

}

int main(){
    Atul();
    Prachi();

}