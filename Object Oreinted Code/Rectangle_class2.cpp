#include<iostream>
using namespace std;

class Rectangle{

    int length, breadth;


    public:

    void setLength(int l){
        if(l >= 0)
            length = l;
        else
        {
            cout<<"Length cannot be negative.\n";
        }
        
    }
    void setBreadth(int b){
        if(b >= 0)
            breadth = b;
        else
        {
            cout<<"Breadth cannot be negative.\n";
        }
        
    }
    
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){

    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(20);

   cout<<"The area is:"<<r1.area()<<endl;
   cout<<"The perimeter is:"<<r1.perimeter()<<endl;
    
}