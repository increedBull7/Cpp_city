#include<iostream>
#include<string>
using namespace std;

class FLIGHT{
    private:
    int Flight;
    string Destination;
    float Distance, Fuel;

    void CALFUEL(){
        if(Distance <= 1000)
            Fuel = 500;

        else if(Distance > 1000 && Distance <= 2000)
            Fuel = 1100;
        
        else if(Distance > 2000)
            Fuel = 2200;
    }

    public:
    void FEEDINFO(){
        cout<<"Enter Flight Number:"; cin>>Flight;
        cin.ignore();
        cout<<"Destination:"; getline(cin,Destination);
        cout<<"Distance:"; cin>>Distance;
        cout<<"#############################\n";    
        CALFUEL();
    }

    void SHOWINFO(){

        cout<<"Flight Number:"<<Flight<<endl;
        cout<<"Destination:"<<Destination<<endl;
        cout<<"Distance:"<<Distance<<endl;
        cout<<"Fuel required:"<<Fuel<<endl;
        cout<<"#############################\n";
    }


};

int main(){

    FLIGHT f1;
    f1.FEEDINFO();
    f1.SHOWINFO();
}
