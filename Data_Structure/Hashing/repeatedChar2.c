#include <stdio.h>
#include <string.h>

char firstReapeatedChar(char *str);

int main(){

    char *str = "atuull cchheecckkuu";
    firstReapeatedChar(str);
    return 0;
}

char firstReapeatedChar(char *str){
    int repeated = 0;
    int len = strlen(str);
    int i;
    int count[256];

    for(i = 0; i < 256; ++i)
        count[i] = 0;

    for(i = 0; i < len; ++i){
        if(count[str[i]] == 1){
            printf("%c", str[i]);
            repeated++;
            //break;
        }
        else count[str[i]]++;
    }

    if(!repeated)
        printf("No Repeated characters.\n");

    return 0;
}