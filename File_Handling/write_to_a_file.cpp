#include<fstream>
#include<iostream>

using namespace std;

int main(){
ofstream fileout;

fileout.open("Heeeelllo1.txt");

fileout<<"Hello Bro!!";

fileout.close();

return 0;
}