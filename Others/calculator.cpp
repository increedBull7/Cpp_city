#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    char oper;

    cout<<"This is a calculator. \n";
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter an operation you want to perform(+,-,/,*,%):";
    cin>>oper;
    cout<<"Enter second number:";cin>>num2;

    switch(oper){

        case '+':   cout<<num1<<" added to "<<num2<<"is "<<num1 + num2<<endl;
                    break;

        case '-':   cout<<num1<<" subtracted from "<<num2<<"is "<<num1 - num2<<endl;
                    break;

        case '/':   cout<<num1<<" divided by "<<num2<<"is "<<num1 / num2<<endl;
                    break;

        case '*':   cout<<num1<<" times "<<num2<<"is "<<num1 * num2<<endl;
                    break;

        case '%':   cout<<num1<<" Modulu(Remainder) "<<num2<<"is "<<num1 % num2<<endl;
                    break;

        default:    cout<<"Go back to second grade Bitch!\n";

    }


    return 0;
}
