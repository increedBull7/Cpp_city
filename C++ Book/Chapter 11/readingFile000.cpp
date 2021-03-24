#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream outf {"sample.txt", ios_base::app};
    string line3;
    line3 = "\nThis is a line which should be at 3 position.\n";
    outf << line3;

    


    return 0;
}