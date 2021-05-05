#include<iostream>

using namespace std;

void recurrrrr(int x){
    if(x > 0){
        cout<<"This is recurrrrr function:"<<x<<endl;
        recurrrrr(x - 1);
    }
    cout<<"Out of recurrrrr:"<<x<<endl;
}

int main(){
    recurrrrr(5);
}