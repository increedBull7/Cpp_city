#include <stdio.h>
#include <string.h>

char firstReapeatedChar(char *str){
    int len = strlen(str);
    int i;
    int count[256];

    for(i = 0; i < 256; ++i)
        count[i] = 0;

    for(i = 0; i < len; ++i){
        if(count[str[i]] == 1){
            printf("%c", str[i]);
            break;
        }
        else count[str[i]]++;
    }

    if(i == len)
        printf("No Repeated characters.\n");

    return 0;
}

int main(){

    char *str = "fuckk sisss tatul arul his shit , if these walls can talk";
    firstReapeatedChar(str);
    return 0;
}

// char firstRepeatedChar(char *str){
    
// }