#include<stdio.h>
int main(){

int n,i = 1;
printf("Enter value: ");
scanf("%d", &n);

do{
    printf("Value of i is %d\n", i);
    i++;
} while(i<=n);

    return 0;
}