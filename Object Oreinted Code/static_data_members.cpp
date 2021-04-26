#include<iostream>
using namespace std;

class Test{
    public:
    static int count;
    Test(){
        count++;
    }

    static int getCount(){
        return count;
    }
};

int Test::count = 0;

int main(){


    cout<<Test::getCount();
    Test t1;
    cout<<Test::getCount();
    Test t2;
    cout<<Test::getCount();
    
}


