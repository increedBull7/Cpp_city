#include"Stack.h"

#include<iostream>
using namespace std;

int parenthesis(string ex);

//char *ex = "(a + b) + (c + d)";
string ex = "{([a + b] * c + d) / ([p + r] + r - q)}";

Stack<char> st(ex.length());
//Stack<char> st2(strlen(ex2));



int main(){


    cout<<"This is a parenthsis balancing prgram!\n";
    //cout<<"Enter you desired expression:";
    cout<<ex<<" is balanced:"<<parenthesis(ex)<<endl;
    //cout<<ex2<<" is balanced:"<<parenthesis(ex2)<<endl;


}

int parenthesis(string ex){
    for(int i = 0; ex[i] != '\0';i++){
        if(ex[i] == '(' || '{' || '[')
            st.push(ex[i]);
        else if (ex[i] == ')' || ']' || '}'){
            if(st.isEmpty())
                return 0;
            st.pop();
        }
    }
    if(st.isEmpty())
        return 1;
    return 0;
}
