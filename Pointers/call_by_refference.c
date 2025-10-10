#include<stdio.h>

    int sum (int * , int *);

    int sum (int* a, int* b){
        *a=7;
        return *a + *b;
    }

int main(){

    int x=2 , y=3;

    printf("The sum of 2 and 3 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);

    return 0;
}