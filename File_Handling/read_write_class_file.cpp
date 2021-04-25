#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string room;

    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator>>(ifstream &ifs, Student &s);

};

ofstream & operator<<(ofstream & ofs, Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.room<<endl;

    return ofs;
}

ifstream & operator>>(ifstream & ifs, Student &s){
    ifs>>s.name>>s.roll>>s.room;
    return ifs;
}

int main(){
    Student s1;
    s1.name = "Prachi";
    s1.roll = 1;
    s1.room = "UPSC";

    //Write to file

    ofstream ofs("Student.txt", ios::trunc);

    ofs<<s1;

    ofs.close();

    //Read from file

    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<s1.name;



}