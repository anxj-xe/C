#include<stdio.h>
int main(){

    FILE *fptr;

    fptr = fopen("write.txt", "w");

    fprintf(fptr, "Hello!");

    fclose(fptr);

    return 0;
}