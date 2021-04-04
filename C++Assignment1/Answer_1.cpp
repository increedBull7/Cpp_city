#include<iostream>
#include<string>
using namespace std;

class Student{

    private:
    int admno;
    char sname[20];
    float eng, math, science, total;

    float ctotal(){
        return eng + math + science;
    }

    public:
    void takedata(){

        cout<<"Enter Addmission Number:"; cin>>admno;
        cin.ignore();
        cout<<"Enter name:"; gets(sname);
        cout<<"Enter the marks in English:"; cin>>eng;
        cout<<"Enter the marks in Science:"; cin>>science;
        cout<<"Enter the marks in Mathematics:"; cin>>math;
        for(int i = 0; i < 20; i++)
            cout<<"*";

        cout<<endl;

        total = ctotal();
    }

    void showdata(){
        cout<<"Addmission Number:"<<admno<<endl;
        cout<<"Name:"<<sname<<endl;
        cout<<"Marks in English:"<<eng<<endl;
        cout<<"Marks in Science:"<<science<<endl;
        cout<<"Marks in Mathematics:"<<math<<endl;
        cout<<"Total:"<<total<<endl;
    }


};

int main(){

    Student stu1;
    stu1.takedata();
    stu1.showdata();

}