#include<iostream>
#include<fstream>

using namespace std;
int main(){


    // ofstream filo("example.txt");

    // string text;
    // cout<<"Enter a text:"; getline(cin, text);

    // filo<<text;



    long begin , end;

    ifstream filo("Atul.txt");
    begin = filo.tellg();
    cout<<"Begin:"<<begin<<endl;

    filo.seekg(0, ios::end);

    end = filo.tellg();
    cout<<"End:"<<end<<endl;
    
    cout<<"Size: "<<end - begin<<endl;







}