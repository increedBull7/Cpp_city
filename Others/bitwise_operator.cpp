/*
    AND = &
    OR  = |
    XOR = ^
    NOT = ~
    Left Shift = <<
    Right Shift = >>

*/



#include<iostream>
using namespace std;
int main(){

    int x = 2, y = 3, z; 
    z = x | y;
    cout<<z<<endl;

    int a = 5, b;
    b = a<<1;
    cout<<"Left Shift:"<<b<<endl;



    return 0;
}

/*
2 = 0010
3 = 0011
& = 0010 = 2

*/