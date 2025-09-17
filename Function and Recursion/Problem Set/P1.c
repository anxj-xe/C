#include<stdio.h>

float avg(int x,int y,int z){
    return (x+y+z)/3;
}

int main(){
    int result=avg(3,6,9);
    printf("Average is %d", result);
    return 0;
}