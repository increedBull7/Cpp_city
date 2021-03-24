#include <iostream>

using namespace std;


int main(){

    cout<< 123.1234 <<"\t Default Float \t \n"
        <<fixed << 123.134 << "\t Fixed \t \n"
        <<scientific << 123.344535 << "\t Scientific \t \n";

    return 0;
}