#include<stdio.h>
int main(){

//P2 using Do While loop

    int i=1,sum=0;

    do{
        sum += i;
        i++;
    }while(i<=10);

    printf("Sum is: %d", sum);

    return 0;
}