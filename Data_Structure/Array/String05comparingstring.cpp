#include<iostream>

using namespace std;


int main(){

    char c[] = "Fucker";
    char c1[] = "Fucker";
    
    int i, j;

    i = j = 0;


    for(i = 0 , j = 0; c[i] != '\0' && c1[j] != '\0';i++, j++){
        if(c[i] != c1[j])
            break;
    }

    if(c[i] == c1[j])
        printf("Yes they are same.\n");
    else if(c[i] <= c1[j] || c[i] >= c1[j])
        printf("Not equal!!\n");
    


}