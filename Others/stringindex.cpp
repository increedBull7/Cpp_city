#include<iostream>
using namespace std;
int main(){

    string name1,name2;
    cout<<"Enter 2 names:";
    cin>>name1>>name2;
    bool ans = (name1[0] == name2[0]);
    cout<<ans;

    return 0;
}