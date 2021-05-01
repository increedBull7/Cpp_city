#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a number\n";
    cin>>a;
    for(int i=2;i<a;i++)
    {
       b=a%i;
       break;
    if(b==0)
    cout<<"num is prime\n";7
    else
    cout<<"num is not prime";
    }
    return 0;

}