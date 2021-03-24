#include "std_lib_facilities.h"


struct Reading{
    int hour;
    double temp;
};


int main(){


    cout<<"Enter file name:";
    string iname;
    cin>>iname;
    ifstream ist {iname};
    if(!ist)
        error("Can't open file.\n");



    string oname;
    cout<<"Enter output file name:";
    cin >> oname;
    ofstream ost{oname};
    if(!ost)
        error("Can't create file.\n");


    vector<Reading> temps;
    int hour;
    double temp;



    while(ist >> hour >> temp){
        if(hour < 0 || hour > 23)
            error("Hour out of range.\n");
        temps.push_back(Reading{hour, temp});
    }


    for(int i = 0; i < temps.size() ; ++i)
        ost<<'(' <<temps[i].hour<<", " <<temps[i].temp<<")\n";


    return 0;
}