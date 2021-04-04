#include<iostream>
using namespace std;

class BOOK{

    private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    int N;

    void TOTALCOST(int){
        cout<<"Total Cost:"<<PRICE * N<<endl;
    }

    public:

    void INPUT(){
        cout<<"Enter Book Number:"; cin>>BOOK_NO;
        cin.ignore();
        cout<<"Enter Book title:"; gets(BOOKTITLE);
        cout<<"Enter Price:"; cin>>PRICE;
    }

    void PURCHASE(){
      cout<<"Enter the numbers of copies:"; cin>>N;
      TOTALCOST(N);


    }

};

int main(){

    BOOK b1;
    b1.INPUT();
    b1.PURCHASE();
}