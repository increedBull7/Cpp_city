#include<iostream>
#include<vector>
using namespace std;
int main(){

    string word;
    vector<string> dict;

    while(cin>>word){
        dict.push_back(word);
    }
    sort(dict.begin(), dict.end());
    for(int i = 0 ; i <= dict.size(); i++)
        if(i ==0 || dict[i-1] != dict[i])
            cout<<dict[i]<<endl;
    return 0;
}