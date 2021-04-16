#include"Stack.h"

string infixToPosfix(string ex);
int precidenceIs(char c);
int isOperand(char c);

string ex = "a+b*c";

Stack<char> itp(ex.length());

int main(){
    itp.push('*');
    cout<<infixToPosfix(ex)<<endl;
    return 0;
}

string infixToPosfix(string ex){
    int i ,j;
    i = j = 0;
    char postfix[ex.length() + 2];

    while(ex[i] != '\0'){
        if(isOperand(ex[i]))
            postfix[j++] = ex[i++];
        else
            postfix[j++] = itp.pop();
    }

    while(itp.topR() != NULL)
        postfix[j++] = itp.pop();
    
    return postfix;

}


int precidenceIs(char c){
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    return 0;
}


int isOperand(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return 0;
    return 1;
}

