#include<iostream>

using namespace std;




int main(){
    char c[]= " I Fucking I love YOU";

    char c2[22];

    int i, j;

    for( i = 0; c[i] != '\0'; i++){}

    i--;

    for(j = 0; i >= 0; j++, i--)   
        c2[j] = c[i];
    
    c2[j] = '\0';
    
    cout<<c<<endl<<c2<<endl;

}