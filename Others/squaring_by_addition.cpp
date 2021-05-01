#include<iostream>
using namespace std;
int main(){

    cout<<"***The Square Calculator***\n";
    cout<<"What's the sqaure of:";
    int num;
    int result;
    cin>>num;

     for(result = 0; result <= num; result++)
         result += num ;

    

    cout<<result<<endl;

    
    return 0;
}