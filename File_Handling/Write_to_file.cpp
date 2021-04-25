#include<fstream>
#include<iostream>
//using namespace std;

int main(){
    std::ofstream outfile("first_file.txt");
    outfile<<"This is file created via c++\n";
    outfile<<"Yeah this seems good\n";
    outfile.close();

}

