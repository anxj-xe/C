#include<stdio.h>
int main(){

    char my_strlen[]= "hello";
    int i=0;

    while(my_strlen[i] != '\0'){
        i++;
    }
    printf("%d", i);
    

    return 0;
} 