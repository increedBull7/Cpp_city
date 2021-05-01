#include <iostream>
using namespace std;

int main()
{    
    string n1, n2, n3;
    string largest , middle, smallest;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;


    if(n1 >= n2 && n1 >= n3)
        largest = n1;
    else if((n1 <= n2 && n1 >= n3) || (n1 >= n2 && n1 <= n3))
        middle = n1;
    else
        smallest = n1;



    if(n2 >= n1 && n2 >= n3)
        largest = n2;
    else if((n2 <= n1 && n2 >= n3) || (n2 >= n1 && n2 <= n3))
        middle = n2;
    else
        smallest = n2;



    if(n3 >= n1 && n3 >= n2)
        largest = n3;
    else if((n3 <= n1 && n3 >= n2) || (n3 <= n2 && n3 > n1))
        middle = n3;
    else
        smallest = n3;


    cout<<smallest<<","<<middle<<","<<largest<<endl;

    return 0;
}