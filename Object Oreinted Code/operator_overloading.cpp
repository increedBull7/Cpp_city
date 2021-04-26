#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    Complex(int real = 0, int img = 0){
        this->real = real;
        this->img = img;
    }

    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;

        return temp;

    }

    friend ostream & operator<<(ostream &o, Complex &x);


};

ostream & operator<<(ostream &o, Complex &x){
    o<<x.real<<" + "<<x.img<<"i\n";
    return o;
}



int main(){

    Complex num1(10,3), num2(12,5), result;

    cout<<num1;
    cout<<num2;
    
    //result = num1.operator+(num2);
    result = num1 + num2;
    cout<<result;
    

}