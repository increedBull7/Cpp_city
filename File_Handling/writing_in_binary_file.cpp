#include<iostream>
#include<fstream>
using namespace std;

class Student{
    char name[20];
    int admno;

    public:
    void getdata(){
        cout<<"Enter the admission no:"; cin>>admno;cin.ignore();
        cout<<"Enter the name:"; gets(name);

    }
    
    void showdata(){
        cout<<"Admission no: "<<admno<<endl;
        cout<<"Name: "<<name<<endl;
    }

    int retadmno(){return admno;}
};

void write_data(){
    Student s1,s2;
    ofstream fileout;
    fileout.open("Student.dat", ios::binary | ios::out | ios::app);
    s1.getdata();
    s2.getdata();

    fileout.write((char *) &s1, sizeof(s1));
    fileout.write((char *) &s2, sizeof(s2));

    fileout.close();
}

void read_data(){
    Student s2;
    ifstream infile;
    infile.open("Student.dat",ios::binary);
    while(infile.read((char *)&s2, sizeof(s2)))
        s2.showdata();
    
    infile.close();


}

void search_data(int n){
    Student s3;
    ifstream infile;
    infile.open("Student.dat", ios::binary);
    while(infile.read((char *)&s3, sizeof(s3)))
        if(s3.retadmno() == n)
            s3.showdata();

    infile.close();
}


int main(){
     //write_data();
  // read_data();
   search_data(1);

}