#include<iostream>

using namespace std;

int main(){

    //cout<<"Enter your First name:"; 
    string first_name, friend_name; 
    char friend_sex;
    int age;


    cout<<first_name;
    cout<<"Enter the name of the person you want to write to: ";
    cin>>first_name;

    cout<<"Enter the age of the recipient:"; cin>>age;
    cout<<"Enter your Friend's name:"; cin>>friend_name;
    cout<<"What's the friends gender? m/f"; cin>>friend_sex;


    cout<<"Dear "<<first_name<<",\n";
    cout<<"\tHow are you? I am fine. I miss you Baby.\nTumhe yaad karte karte mere hath me dard hota hai. ";
    cout<<"Have you seen "<<friend_name<<" lately? ";

    if(friend_sex == 'm')
        cout<<"If you see "<<friend_name<<" please ask him to call me.\n ";
    else if (friend_sex == 'f') 
        cout<<"If you see "<<friend_name<<" Please ask her to call me.\n";


    if(age <= 12)
        cout<<"Next year you wil be "<<age + 1<<".";

    else if(age == 17)
        cout<<"Next year you will be able to vote.";

    else if(age > 70)
        cout<<"Hope you are enjoying retirement.";

    else if(age == 0 || age >= 110)
        cout<<"You're Kidding!";

    cout<<"\n Your sincerely,\n \t Atul.";

    
    return 0;
}