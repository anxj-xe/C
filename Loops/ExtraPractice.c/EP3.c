#include<stdio.h>
int main(){

    int n,product=1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        product *= i;
    }
    printf("Factorial of n is %d", product);

    return 0;
}