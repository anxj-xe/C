#include<stdio.h>
int main(){
    float P , r , t , si;
    
    P = 300000.0;
    r = 2.0;
    t = 24.0;

    si = (P*r*t)/100;

    printf("Simple Interest is : %.2f", si);
    
    return 0;

}