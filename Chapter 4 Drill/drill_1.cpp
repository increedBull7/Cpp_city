#include<iostream>
using namespace std;
int main(){

    double num1,num2;

    while(cin>>num1){

        

        cin>>num2;
        
        if(num1 > num2) {
            cout<<num1<<" is greater.\n"<<num2<<" is smallest."<<endl;
            if(num1 - num2 || num2 - num1 == 1.0 / 100000)
                cout<<"The numbers are almost equal\n";

        }

        
        else if(num1 == num2)cout<<num1<<" and "<<num2<<" are equal\n";

        else cout<<num2<<" is greater.\n"<<num1<<" is smallest."<<endl;
        
    }

    return 0;
}