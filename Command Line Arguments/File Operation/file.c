#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Usage: %s <filename>",argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1],"r");
    if(fp == NULL){
        printf("Can not access file: %s",argv[1]);
        return 1;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);

    return 0;
}