#include<iostream>
#include<fstream>

using namespace std;

class Student{
    string name;
    int grade;
    int addMino;
    public:
    void newStudent(string name,int grade,int addMino){
        this->name = name;
        this->grade = grade;
        this->addMino = addMino;
    }
    void showStudent(){
        cout<<"Name: "<<name<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<"Admission Number:"<<addMino<<endl;
    }



    void addStudent(string name,int grade,int addMino);
    void searchStudent(int admno);
    int retAdmno(){return addMino;}
    void editStudent(int addmno);
    void showAll();


};


int main(){
    int option, n;
    string name;
    int grade;
    int addMino;
    Student demo;


    do{
        cout<<"Student File System\n";
        cout<<"        MENU\n";
        cout<<"1 --> Add Student\n";
        cout<<"2 --> Search Student\n";
        cout<<"3 --> Delete Student\n";
        cout<<"4 --> Show all Students\n";
        cout<<"5 --> Quit\n";
        cin>>option;
        n = option;

        switch(n){
            case 1:
                cout<<"Enter Name:";
                cin.ignore(); 
                getline(cin, name);
                cout<<"Grade:";cin>>grade;
                cout<<"Admission Number:"; cin>>addMino;
                demo.addStudent(name,grade,addMino);
                break;
            case 2:
                int adm;
                cout<<"Enter Addmission number:"; 
                cin>>adm;
                demo.searchStudent(adm);
                break;
            case 3:
                int adn;
                cout<<"Enter Addmission number:"; 
                cin>>adm;
                demo.~Student();
                break;
            case 4:
                demo.showAll();
            

            
        }

    }while(option != 5);

    


}

void Student::addStudent(string name,int grade,int addMino){

    Student stud;
    stud.newStudent(name,grade,addMino);


    ofstream writeF("Student_file_system.data", ios::binary | ios::app);
    writeF.write((char *) &stud, sizeof(stud));
    writeF.close();

    cout<<"Student has been added.\n";

    ifstream readF;
    readF.open("Student_file_system.data",ios::binary);
    while(readF.read((char *)&stud, sizeof(stud)))
        stud.showStudent();
    
    readF.close();

}

void Student::searchStudent(int admno){
    Student stud;
    ifstream readF;
    readF.open("Student_file_system.data",ios::binary);
    while(readF.read((char *)&stud, sizeof(stud)))
        if(stud.retAdmno() == admno)
            stud.showStudent();
    
    readF.close();

}

void Student::showAll(){
    Student stud;
    ifstream readF;
    readF.open("Student_file_system.data",ios::binary);
    while(readF.eof())
        stud.showStudent();
    
    readF.close();
}
