#include <iostream>

using namespace std;

int main(){

    cout<<"Enter an expression: ";
    int lval = 0;
    int rval = 0;
    int result;
    char op;
    cin>>lval >> op >> rval;

    if(op == '+')
        result = lval + rval;
    else if(op == '-')
        result = lval - rval;



    cout<<"Result: "<<result<<endl;

    return 0;
}