#include<iostream>
using namespace std;
int main(){

    char start = 'a';
   // cout<<char(start + 1);

    while(start <= 'z'){

        cout<<start<<" in integer is "<<int(start)<<endl;
        ++start;

    }

    char start2 = 'A';
    
    for(int i = 0; i <= 'Z'; i++)
        cout<<char(start2 + i)<<" in intger is "<<int(start2 + i)<<endl;

    return 0 ;
}