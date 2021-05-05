#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> love;
    love.insert(pair<int, string>(1,"Prachu"));
    love.insert(pair<int, string>(2,"Atul"));

    map<int, string>::iterator itr;

    //for(map<int, string> x: love)
    for(itr = love.begin(); itr != love.end(); itr++)
        cout<<itr->first<<" "<<itr->second<<endl;


}