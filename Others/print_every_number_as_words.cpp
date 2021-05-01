#include<iostream>
using namespace std;
int main(){

    cout<<"Enter a number:"; int n; cin>>n;
    int rev = 0;
    int remainder;
    while(n > 0){
        remainder = n % 10;
        n = n / 10;
        rev = rev * 10 + remainder;
    }
    remainder = 0;

    int rev2 = rev;
    while(rev2 > 0){
        remainder = rev2 % 10;
        rev2 = rev2 / 10;
        switch(remainder){
            case 0: cout<<"zero "; break;
            case 1: cout<<"one "; break;
            case 2: cout<<"two "; break; 
            case 3: cout<<"three "; break;
            case 4: cout<<"four "; break;
            case 5: cout<<"five "; break;
            case 6: cout<<"six "; break;
            case 7: cout<<"seven "; break;
            case 8: cout<<"eight "; break;
            case 9: cout<<"nine "; break;

        }

    }

    cout<<endl;
}