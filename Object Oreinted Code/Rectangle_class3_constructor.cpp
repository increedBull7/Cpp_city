#include<iostream>
using namespace std;

class Rectangle{

    int length, breadth;

    
    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }



    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){

    Rectangle r1(12,3);
    cout<<r1.area();


    
}