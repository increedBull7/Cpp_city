#include <iostream>

using namespace std;

int main(){

    double x, y;

    char r = '1';

    while(r != '|'){
        cin>>x>>y>>r;
        double sub = (x - y);
        cout<<"sub is"<<sub<<endl;
        if(sub <= 1.0 / 100) cout<<"Almost equal\n";

        (x > y)?cout<<"x is greater\n":cout<<"y is greater\n";
        if(x == y) cout<<"equal";
        
    }
    
    return 0;  
}