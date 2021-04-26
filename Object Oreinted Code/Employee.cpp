#include<iostream>
using namespace std;

class Employee{
    int eno;
    string name;
public:
    Employee(int eno, string name){
        this->eno = eno;
        this->name = name;
    }

    int get_eno(){
        return eno;
    }
    string get_name(){
        return name;
    }
    
};

class Fulltime_Employee : public Employee{
    int salary;

    public:
    Fulltime_Employee(int eno, string name, int salary): Employee(eno, name){
        this->salary = salary;
    }

    int get_salary(){
        return salary;
    }

};

class Parttime_Employee : public Employee{
    int wages;

    public:
    Parttime_Employee(int eno, string name, int wages): Employee(eno, name){
        this->wages = wages;
    }

    int get_wages(){
        return wages;
    }


};

int main(){
    Fulltime_Employee p1(1234,"Atul",7000000);
    Parttime_Employee p2(1235,"Vapati", 40000);

    cout<<"Salary of "<<p1.get_name()<<" is "<<p1.get_salary()<<endl;
    cout<<p2.get_name()<<"'s Salary is "<<p2.get_wages()<<" and Employee Number: "<<p2.get_eno()<<endl;

}


