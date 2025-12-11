#include<stdio.h>
int main(){

    char str[5];
    
    // scanf("%s", str); to take input as whole

    for(int i=0;i<4;i++){ //to take input char by char
        scanf("%s", &str[i]);
        fflush(stdin);
    }

    printf("%s", str);
    

    return 0;
}