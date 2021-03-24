#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int a,b,c,i,j;
    int n1,n2;

    cout<<"<--- Quadratic Equation solver --->\n";
    cout<<"<---    ax^2  + bx + c = 0     --->\n";
    cout<<"Enter the values of a ,b ,c\n";
    cout<<"a:";cin>>a;cout<<endl;
    cout<<"b:";cin>>b;cout<<endl;
    cout<<"c:";cin>>c;cout<<endl;
    cout<<"Your entered values in a equation looks like this: ";
    cout<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0 \n";

    // for(i = 1; i < b; i++)
    //     for(j = 1; j < b; j++)
    //         if(i + j == b && i * j == a*c){
    //             n1 = i;
    //             n2 = j;
    //             break;
    //         }               
        
    // cout<<"Then----->\n\n";
    // cout<<a<<"x^2 + ("<<n1<<"+"<<n2 <<")x + "<<c<<" = 0 \n\n";
    // cout<<"Then----->\n\n";
    // cout<<a<<"x^2 + "<<n1<<"x + "<<n2<<"x + "<<c<<" = 0 \n\n";
    // cout<<"Then----->\n\n";
    // cout<<"("<<a<<"x^2 + "<<n1<<"x) + ("<<n2<<"x + "<<c<<") = 0 \n\n";

    //The quadratic Equation--- x = (-b +- squareroot(b^2 - 4ac)) / 2a



    double x1, x2;

    x1 = (-b + sqrt(b * b - (4* a * c))) / (2 * a);

    x2 = (-b - sqrt(b * b - (4* a * c))) / (2 * a);

    cout<<x1<<" "<<x2<<endl;

    return 0;
}