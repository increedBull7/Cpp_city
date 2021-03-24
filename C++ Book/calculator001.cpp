#include <iostream>

using namespace std;

int main(){

    cout<<"Enter an expression: ";
    int lval = 0;
    int rval = 0;
    int result;
    char op;
    cin>>lval >> op >> rval;

    switch (op)
    {
    case '+':
        result = lval + rval;
        break;
    case '-':
        result = lval - rval;
        break;
    case '*':
        result = lval * rval;
        break;
    case '/':
        result = lval / rval;
        break;                    
    default:
        break;
    }



    cout<<"Result: "<<result<<endl;

    return 0;
}