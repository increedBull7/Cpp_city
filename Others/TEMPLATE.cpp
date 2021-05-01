/*Template is a way of making our functions and classes generalize
as far as data type is concerned. Regardless of data type function 
or class should be able to the task with any data type.
*/

/*When function overloading is performed on a two similar functions but 
have different data type, here Templates come into play.
*/

#include<iostream>
using namespace std;

//Template function declaration
template <class X> //Here X can be int, float, double, anything
X big (X a, X b){
    if(a>b)
        return a;
    else
        return b;
}
//Function template is called generic function.

int main(){
    cout<<big(4,7)<<" "<<big(4.54, 5.65)<<endl;
}

