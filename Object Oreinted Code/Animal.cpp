#include<iostream>
using namespace std;
class Animal{
    public:
    void walk(){
        cout<<"Tik tik tik tik tik dham dham dham\n";
    }
    void eat(){
        cout<<"chop chop hop chop khop khop khaap khup\n";
    }
    void fuck(){
        cout<<"Oh Fuck baby....Aaaaaaahhh!!! Ohh yeaaaah Aahhhh aaahahhahahhahahahahaha\nHard baby hard baby slow come on baby good \n Ohh yeaaaah\n";
    }

};

class Cat : public Animal{
    public:
    void talk(){
        cout<<"Meeow... Meeow...\n";
    }
};

class Dog : public Animal{
    public:
    void talk(){
        cout<<"Graawwrrrrrr...Wooof Woooofff....Grrrrrrrr....Woooof\n";
    }
};

class Dinasaur : public Animal{
    public:
    void talk(){
        cout<<"Cooooookoooodoooocoooooooo\n";
    }
};

int main(){

    Cat pussy;
    pussy.talk();
    pussy.fuck();

}