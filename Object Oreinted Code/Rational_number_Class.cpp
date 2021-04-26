#include<iostream>
using namespace std;

class Rational_number_Class
{
private:
    int a,b;
    
    
 public:
    Rational_number_Class(int a = 0, int b = 0){
        this->a = a;
        this->b = b;
    }

    friend ostream & operator<<(ostream &o, Rational_number_Class &r);
    friend istream & operator>>(istream &o, Rational_number_Class &r);


    Rational_number_Class operator+(Rational_number_Class r){
        Rational_number_Class temp;
        temp.a = a * r.b + b * r.a;
        temp.b = b * r.b;
        return temp; 
    }

};

ostream & operator<<(ostream &print, Rational_number_Class &r){
        print<<"("<<r.a<<"/"<<r.b<<")"<<endl;
        return print;
    }

istream & operator>>(istream &input, Rational_number_Class &r){
    input>>r.a>>r.b;
    return input;
}

int main(){
    Rational_number_Class num1(3,4), num2(2,5), result;
    cout<<num1;
    cout<<num2;
    cin>>num1;

    result = num1 + num2;

    cout<<result;



}