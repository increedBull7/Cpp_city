#include<iostream>
using namespace std;


int main(){

    // char *chr = "asdfnkasdfg";
    // cout<<chr;
    // cout<<chr[0];
    //error this is deprecated

    char chr2[] = "asdfghjkloiuytrewq";
    char salt[] = "raamu";
    char code[19];

    // for(int i = 0; i < 19; i++)
    //     for(int j = 0; j < 5; j++)
    //         code[i] = salt[i];

    for(int i = 0; i < 19; i++){
        if(code[i] != '\0')
        for(int j = 0; j < 5; j++){
            code[i] = salt[j];
        }
        
    }



    cout<<code[0];



    return 0;
}