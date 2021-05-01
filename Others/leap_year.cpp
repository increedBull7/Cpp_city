#include<iostream>

using namespace std;

int main(){

    int year;

    cout<<"This Program checks wheather the entered year\n is leap year or not."<<endl;
    cout<<"Enter the value of year:"<<endl;
    cin>>year;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout<<year<<"  is Leap Year."<<endl;
    else
        cout<<year<<" is not a Leap Year."<<endl;

    return 0;
}