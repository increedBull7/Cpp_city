#include <iostream>
using namespace std;


int main(){

    int x, y ,z;
    std::cin>>x>>y>>z;

    if((x > y) && (x > z))
        if(y > z)
            std::cout<<x<<y<<z<<endl;
        else 
            cout<<x<<z<<y<<endl;

    //std::cout<<x<<y<<z;
    return 0;
}   