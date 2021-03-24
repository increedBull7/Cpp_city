#include <iostream>
#include <vector>

using namespace std;

class Token{
    public:
    char kind;
    int value;
    void get_Token(){
        cin>>kind;
        cin>>value;
    }
};

int main(){
    vector<Token> tokEx;

    Token t {9, 4};
    Token t2 {'*', 0};
    Token t3 {9, 4};

    tokEx.push_back(t);  
    tokEx.push_back(t2);    
    tokEx.push_back(t3);
    int result ;  

    for(int x = 0; x < tokEx.size(); x ++){
        if(tokEx[x].kind == '*')
            result = tokEx[x - 1].value * tokEx[x + 1].value;
    }

    cout<<result;


   


    return 0;
}