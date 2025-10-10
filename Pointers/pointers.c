#include<stdio.h>
int main(){

    int x= 2;
    int* y= &x;

    printf("The value of x is: %d", *(&x));

    return 0;
}