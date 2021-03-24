#include <iostream>
#include <fstream>


using namespace std;


int main(){
    string iname;
    cout<<"Enter the input file name:";
    cin >>iname;
    ifstream ist {iname};

    int sum = 0;

    int n;


    while(ist >> n){
        sum += n;
    }

    cout<<"Sum:" <<sum;


    return 0;
}