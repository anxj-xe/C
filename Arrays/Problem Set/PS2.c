#include<stdio.h>
int main(){

    int array[10];

    for(int i=0;i<10;i++){
        array[i]= 5* (i+1);
    }
    for(int i=0;i<10;i++){
        printf("The value of 5 x %d is %d\n", (i+1),array[i]);
    }

    return 0;
}