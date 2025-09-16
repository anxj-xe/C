#include<stdio.h>

float fer(int x){
    return (9*x)/5 +32;
}

int main(){
    float result = fer(100);
    printf("In fer is %f", result);
    return 0;
}