#include <iostream>
using namespace std;

namespace Cheeku{
    void cheeku(){
        cout<<"This is cheeku From Cheeku namespace.\n";
    }

    void bhaalu(){
        cout<<"This is cheeku's Bhaalu.\n";
    }
    int candies = 30;
}

void cheeku(){
    cout<<"This is cheeku Out of Cheeku namespace.\n";
}



int main(){

    cheeku();
    Cheeku::cheeku();

    return 0;
}