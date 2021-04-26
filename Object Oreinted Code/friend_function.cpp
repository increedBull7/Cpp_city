#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    Complex(int real = 0, int img = 0){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout<<real<<" + "<<img<<"i\n";
    }

    friend Complex operator+(Complex x, Complex y);
};


   Complex operator+(Complex x, Complex y){
        Complex temp;
        temp.real = y.real + x.real;
        temp.img = y.img + x.img;

        return temp;

    }


int main(){

    Complex num1(10,3), num2(12,5), result;

    num1.display();
    num2.display();

    //result = num1.operator+(num2);
    result = num1 + num2;
    result.display();





}