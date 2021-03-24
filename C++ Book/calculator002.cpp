#include <iostream>
using namespace std;

int main(){

    cout<<"Enter an expression: ";
    cout<<"Add an 'x' to that expression. e.g(2 + 6 * 4x)\n";
    int lval = 0;
    int rval ;
    cin>> lval;

    for(char op; cin>>op;){
        if(op != 'x') 
            cin >>rval;

        switch(op){
            case '+': lval += rval;
            break;

            case '-': lval -= rval;
            break;

            case '*': lval *= rval;
            break;

            case '/': lval /= rval;
            break;

            default: cout<<"Result: " <<lval;
                    return 0;

        }

    }

}