#include<stdio.h>
int main(){

    FILE *fptr;

    fptr = fopen("write.txt", "w");

    fprintf(fptr, "Hello!");

    return 0;
}