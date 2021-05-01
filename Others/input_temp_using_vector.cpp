#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<double> temperature;

    double temp;
    double sum;

    while(cin>>temp){
        temperature.push_back(temp);
    }

    for(int i = 0 ; i <= temperature.size(); i++)
        cout<<temperature[i]<<endl;



    cout<<"Calculating the mean of given the data:\n";

    for(int i = 0 ; i <= temperature.size(); i++)
        sum += temperature[i];


    cout<<"The mean is "<<sum/temperature.size()<<endl;

    sort(temperature.begin(), temperature.end());

    cout<<"The median is "<<temperature[temperature.size()/2]<<endl;
    return 0;
}