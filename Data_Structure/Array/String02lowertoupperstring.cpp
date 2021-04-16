#include<iostream>

using namespace std;

int main(){
    string s1 = "ATUL RAJ";

    for(int i = 0; i < s1[i] != '\0'; i++)
        cout<<char(s1[i] + 32)<<endl;

    string s2 = "aTulRAjjiI";

    for(int i = 0; i < s1[i] != '\0'; i++){
        if(s2[i] >= 65 && s2[i] <= 90)
            s2[i] += 32;
        else if(s2[i] >= 97 && s2[i] <= 122)
            s2[i] -= 32;
    }

    for(int i = 0; i < s1[i] != '\0'; i++)
        cout<<s2[i]<<" ";






}