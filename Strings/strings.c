#include<stdio.h>
int main(){

    // char str[] = {'a', 'b', 'c', '/0'};
    char str[]= "abc";// same as above  
    
    for(int i=0;i<3;i++){
        printf("characters are %c\n", str[i]);  
        
    }

    return 0;
}