#include<iostream>
using namespace std;
int main(){

    int grain = 1;
    int square;

    cout<<"Enter the number of squares:";
    cin>>square;
    
    for(int i = 1; i <=square; i++)
        grain += grain;

    cout<<grain<<endl;


    return 0;
}