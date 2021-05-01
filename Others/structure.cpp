#include<iostream>

using namespace std;

//created a structure namely books

struct books{
		long isbn;
		char book_name[120];
		float price;
};

//declared 2 fuctions input() and Display

books input();

void display(books b);



int main(){
//created a b1 of data type books
	books b1;
//called input() and returned value will be inside b1
	b1 = input();

	cout<<"The book details were"<<endl;
//called display() passed b1 as parameter
	display(b1);

	return 0;
}
//body of input()
//this takes input from users and stores in b1

books input(){

	books b;

	cout<<"Enter book isbn:"<<endl<<"Enter the title of book"<<endl<<"Enter the price:"<<endl;

	cin >>b.isbn>>b.book_name>>b.price;

	return (b);
}

// this display() shows what's inside the b1
void display(books b){


cout<<b.book_name<<endl<<b.price<<endl<<b.isbn<<endl;


}


