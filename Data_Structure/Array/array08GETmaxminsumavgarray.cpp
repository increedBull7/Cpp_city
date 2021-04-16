#include<iostream>

using namespace std;


int arrayy[] = {12,23,34,2,34,65,43,21,56};

int get(int index);
void set(int data, int index);
int max();
int length();
int min();
int sum();
int avg();

int main(){
   int s = get(4);
   cout<<s<<endl;
   set(4 , 4);
   cout<<max()<<endl;
   cout<<min()<<endl;
    cout<<sum()<<endl;
    cout<<avg()<<endl;
}

int get(int index){
    if(index >= 0 && index < length())
        return arrayy[index];
    else
    {
        return -1;
    }
    
}

void set(int data, int index){
    arrayy[index] = data;
}

int max(){
    
    int max = 0;
    for(int i = 0; i < length();i++ ){
        if(arrayy[i] > max)
            max = arrayy[i];
    }
    return max;
}

int length(){
    int length = 0;
    for(int i = 0; i < 9; i++)
        length ++;
    return length;
}

int min(){
    int min = arrayy[0];
    for(int i = 1; i < length();i++ ){
        if(arrayy[i] < min)
            min = arrayy[i];
    }
    return min;
}

int sum(){
    int sum = 0;
    for(int i = 0; i < length(); i++){
        sum += arrayy[i];
    }
    return sum;
}

int avg(){
    
    int sumw = sum();
    int len = length();
    int avg = sumw/len;
    return avg;
}