#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

    FILE *source;
    FILE *destine;

    char ch;
    if(argc != 3){
        printf("Please provide, source_name destination_name of file.\n");
        exit(1);
    }


    source = fopen(argv[1], "r");
    destine = fopen(argv[2],"w");
    if(source == NULL || destine == NULL){
        printf("File opening error!!!");
        exit(1);
    }
    ch = fgetc(source);

    while(ch != EOF){
        fputc(ch, destine);
        ch = fgetc(source);
    }

    printf("File copied!!!\n");

    fclose(source);
    fclose(destine);
    
    return 0;
}