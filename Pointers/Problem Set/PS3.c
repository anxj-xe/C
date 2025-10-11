#include<stdio.h>

    void sum(int *, int *,int *);
    void average(int *, int *, int *);

    void sum(int* x, int* y, int* z){
        *z = *x + *y;
    }

    void average(int* x, int* y, int* z){
        *z = (*x + *y)/2;
    }

    int main(){

        int a = 4, b =6, c;
        sum(&a,&b,&c);
        printf("The sum of a and b is %d\n", c);

        average(&a,&b,&c);
        printf("The average of a and b is %d\n", c);

    return 0;     
    }