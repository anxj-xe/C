#include<stdio.h>
int main(){

    FILE *fptr;

    fptr = fopen("read.txt", "r");

    char readstring[50];

    fgets(readstring, 50, fptr);

    printf("%s", readstring);

    fclose(fptr);

    return 0;
}