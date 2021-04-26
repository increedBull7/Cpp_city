#include<iostream>
using namespace std;

class Rectangle{

    public:
    int length;
    int breadth;

    Rectangle(int length = 0, int breadth = 0){
        this->length = length;
        this->breadth = breadth;
    }

    void display(){
        cout<<"Length = "<<length<<" , Breadth = "<<breadth<<endl;
    }

    void area(){
        cout<<"Area of Rectangle:"<<length * breadth<<endl;
    }
};


class Cuboid: public Rectangle{
    public:
    int height;

    Cuboid(int length, int breadth, int height){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void show_Demension(){
        cout<<"Length = "<<length<<" , Breadth = "<<breadth<<" , Height = "<<height<<endl;
    }
    void area(){
        cout<<"Area of Cuboid:"<<length * breadth * height<<endl;
    }


};


int main(){
    Rectangle plot(200, 500);
    plot.display();
    plot.area();

    Cuboid room(20, 25,12);
    room.show_Demension();
    room.area();



}