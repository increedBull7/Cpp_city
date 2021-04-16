#include<iostream>

using namespace std;

int main(){
    string s = "Atul";
    cout<<int(s[3])<<endl;

    typedef string shabd;
    shabd s2 = "Pragati CHeeeeeekuu";
    int i = 0;
    for(i = 0; i < s2[i] != '\0';i++)
        cout<<s2[i]<<" in ASCII is "<<int(s2[i])<<endl;  
}