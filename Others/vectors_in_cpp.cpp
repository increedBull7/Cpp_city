#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> age(4);
    // age[0] = 1;
    // age[1] = 2;
    // age[2] = 3;

    // cout<<age[2];


    vector<string> philosopher(4);
    philosopher[0] = "Munsi PremChand";
    philosopher[1] = "Plato";
    philosopher[2] = "Hume";
    philosopher[3] = "Keirkegaard";
    for(int i = 0 ; i <= philosopher.size(); i++)
        cout<<philosopher[i]<<endl;

    philosopher.push_back("Pragati");

    //cout<<philosopher.size()<<endl;

    philosopher.push_back("Prachi");

    for(int i = 0 ; i <= philosopher.size(); i++)
        cout<<philosopher[i]<<endl;



    cout<<philosopher.size()<<endl;
    cout<<philosopher.max_size();
    

    return 0;
}