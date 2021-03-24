#include <iostream>
#include <fstream>
#include <vector>



using namespace std;

int main(){

    cout<<"Enter input file name: ";
    string iname;
    cin >> iname;

    ifstream inf {iname, ios_base::binary};

    if(!inf) cout<<"error open input file!";

    cout<<"Enter output file name: ";
    string oname;
    cin >> oname;

    ofstream otf {oname, ios_base::binary};

    if(!otf) cout<<"error open output file!";

    vector<int> v;
    





    return 0;
}