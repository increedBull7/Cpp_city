#include<iostream>

using namespace std;



int main(){
    string s = "Hello World,   How are YOU?";
    int vowel = 0;
    int word = 1;

    for(int i = 0; s[i] != '\0'; i++){
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vowel++;
        }

        if(s[i] == ' ' && s[i - 1] != ' ')
            word++;
    }

    cout<<"Number of vowels are: "<<vowel<<endl;
    cout<<"Number of word are: "<<word<<endl;


}