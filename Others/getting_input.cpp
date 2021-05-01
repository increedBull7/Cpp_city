#include <iostream>
using namespace std;

int main()
{
	char name[100]={0};
	
	//read name
	cout<<"Enter your name: ";
    std::getline(std::cin, name);
	cout<<"Name is: "<<name<<endl;
	
	return 0;
}
