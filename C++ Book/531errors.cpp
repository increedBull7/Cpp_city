#include "std_lib_facilities.h"

using namespace std;

class Bad_area{};

int area(int x, int y);

int main(){
    try{
    int x = -1;
    int y = 8;
    int area1 = area(x, y);
    cout<<area1;

    
        //area(6,8);
    }
    catch(Bad_area){
        cout<<"Naughty Naughty!!\n";
    }

    return 0;
}

int area(int x, int y){
    if(x <= 0 || y <= 0)
        throw Bad_area{};
    return x * y;
}