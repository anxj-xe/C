#include<stdio.h>
int main(){

    int n=100,sum=0;

    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    printf("Sum is: %d", sum);
    
    return 0;
}