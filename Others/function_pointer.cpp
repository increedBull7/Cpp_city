#include<iostream>
using namespace std;

void cheeku(){
    cout<<"Hi I'm Cheeku!!!\n";
}
int main(){

    void (*fp)();
    fp = cheeku;
    (*fp)();

}