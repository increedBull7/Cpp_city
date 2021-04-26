#include<iostream>

using namespace std;

int main(){

    class Student{

        public:
        string Name ;

        Student(){
            cout<<"This is from constructor.\n";
        }
        
    };

    Student student1;
    Student student2;




    return 0;
}