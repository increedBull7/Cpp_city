#include "std_lib_facilities.h"
#include <fstream>


const int not_a_reading = -7777;
const int not_a_month = -1;

constexpr int imp_min = -200;
constexpr int imp_max = 200;





struct Day{
    vector<double> hour{vector<double>(24, not_a_reading)};
};

struct Month{
    int month {not_a_month};
    vector<Day> day {32};
};

struct Year{
    int year;
    vector<Month> month {12};
};

struct Reading{
    int day;
    int hour;
    double temp;
};

bool is_valid(const Reading &r){
    if(r.day < 1 || 31 < r.day)
        return false;
    if(r.hour < 0 || 23 < r.hour)
        return false;
    if(r.temp < imp_min || imp_max < r.temp)
        return false;
    return true;
}

void end_of_loop(istream& ist, char term, const string& message){
    if(ist.fail()){
        ist.clear();
        char ch;
        if(ist>>ch && ch == term)
            return;
        error(message);
    }
}


istream& operator>>(istream &is, Reading &r){
    char ch1;

    if(is>>ch1 && ch1 != '('){
        is.unget();
        is.clear(ios_base::failbit);

        return is;
    }
    char ch2;
    int d;
    int h;
    double temp;
    is >>d >>h >> temp;

    if(!is || ch2 != ')')
        error("Bad Reading");
    
    r.day = d;
    r.temp = temp;
    r.hour = h;

    return is;
}


istream& operator>>(istream &is, Month &m){
    char ch = 0;
    
    if(is >> ch && ch != '{'){
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    string month_marker;
    string mm;
    is >> month_marker >> mm;

    if(!is || month_marker != "month")
        error("bad start of month");
    
    //m.month = month_to_int(mm);
    
    int duplicates  = 0;
    int invalids = 0;

    for(Reading r; is >>r;){
        if(is_valid(r)){
            if(m.day[r.day].hour[r.hour] != not_a_reading)
                ++duplicates;

            m.day[r.day].hour[r.hour] = r.temp;

        }
        else
            ++invalids;

    }

    if(invalids)
        error("invalid reading in month", invalids);

    if(duplicates)
        error("dupliate reading in month",duplicates);


    end_of_loop(is, '}', "bad end of month");

    return is;

}


istream& operator>>(istream &is, Year &y){
    char ch;
    is >> ch;

    if(ch != '{'){
        is.unget();
        is.clear(ios::failbit);
        return is;
    }

    string year_maker;
    int yy;

    is >> year_maker >> yy;

    if(!is || year_maker != "year")
        error("bad start of year");

    y.year = yy;

    while(true){
        Month m;
        if(!(is >> m))
            break;
        y.month[m.month] = m;

    }

    end_of_loop(is, '}', "bad end of year");
    return is;
}


int main(){

    cout<<"Please enter input filename:";
    string iname;
    cin>> iname;

    ifstream ist{iname};

    if(!ist)
        error("can't open input file\n", iname);

    
    cout<< "Please enter output filename:";
    string oname;
    cin >> oname;

    ofstream ost{oname};

    if(!ost)
        error("can't open output file\n", oname);
    

    vector<Year> ys;

    while(true){
        Year y;
        if(! (ist  >> y))
            break;
        ys.push_back(y);

    }

    cout <<"read" <<ys.size()<<"years of readings \n";





    return 0;



}

