#include<iostream>
#include<string>
using namespace std;

class TEST{
    private:
    int TestCode, NoCandidate, CenterReqd;
    string Description;
    void CALCNTR(){
        CenterReqd = NoCandidate / 100 + 1;     
    }

    public:
    void SCHEDULE(){
        cout<<"Enter TestCode:"; cin>>TestCode;
        cin.ignore();
        cout<<"Description:";
         getline(cin, Description);
        cout<<"Number of Candidate:"; cin>>NoCandidate;
        cout<<"############################\n";

        CALCNTR();

    }

    void DISPTEST(){
        cout<<"TestCode:"<<TestCode<<endl;
        cout<<"Description:"<<Description<<endl;
        cout<<"Number of Candidate:"<<NoCandidate<<endl;
        cout<<"Centers required:"<<CenterReqd<<endl;
        cout<<"############################\n";
    }
};

int main(){

    TEST t1;
    t1.SCHEDULE();
    t1.DISPTEST();

}