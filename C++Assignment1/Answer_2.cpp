#include<iostream>

using namespace std;

class Batsman{
    private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;

    float calavg(){
        if(innings == notout){
            batavg = runs;
            return batavg;
        }
        else{
        batavg = runs / (innings - notout);
        return  batavg;
        }
    }

    public:
    void readdata(){
        cout<<"Enter your bcode:"; cin>>bcode;
        cin.ignore();
        cout<<"Enter Name:"; gets(bname);
        cout<<"Enter Innings:"; cin>>innings;
        cout<<"Enter Notout:"; cin>>notout;
        cout<<"Enter Runs:"; cin>>runs;
        cout<<"##############################\n";
    
    }

    void displaydata(){
        cout<<"Bcode:"<<bcode<<endl;
        cout<<"Name:"<<bname<<endl;
        cout<<"Innings:"<<innings<<endl;
        cout<<"Notout:"<<notout<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"The average is "<<batavg<<endl;
        cout<<"##############################\n";
    }
};

int main(){

    Batsman bat1;
    bat1.readdata();
    bat1.displaydata();
}
