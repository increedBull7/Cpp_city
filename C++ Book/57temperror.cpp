#include <iostream>
#include <vector>
using namespace std;




int main(){

    vector<double> temps;
    double sum = 0, high = 0, low = 0;

    for(double x; cin >> x;)
        temps.push_back(x);

    for (int x: temps){
        if(x > high) high = x;
        if(x < low) low = x;
        sum += x;
    }

    cout<<"Highest Temp:"<<high<<endl;
    cout<<"Lowest Temp:"<<low<<endl;
    cout<<"Sum of Temp:"<<sum<<endl;




    return 0;
}