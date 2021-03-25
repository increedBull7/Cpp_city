#include <iostream>

using namespace std;

int main(){

    cout<<"How many pennies you got? ";
    int pennies;
    cin >> pennies;

    int dollar = pennies / 100;
    int mod = pennies % 100;
    int halfD = (mod) / 50;
    mod = halfD % 50;
    int quater = halfD % 25;
    //mod = quater % 25;


    cout<<dollar;
    cout<<halfD;
    cout<<quater;


    return 0;
}