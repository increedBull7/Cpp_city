#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream write("Atul.txt", ios::app);

     string name, text;
     int age;
    cout<<"Enter your Name: "; getline(cin, name);
    write<<name<<endl;
    cout<<"Enter your age:"; cin>>age;
    write<<age<<endl;
    cin.ignore();
    cout<<"Favourite song?"; getline(cin, text);
    write<<text<<endl;

    ifstream read("Atul.txt");
    
    getline(read, name);
    read>>age;
    read.ignore();
    getline(read, text);
    cout<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"Song: "<<text<<endl;


}