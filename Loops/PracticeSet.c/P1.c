#include<stdio.h>
int main(){

int n,i;
printf("Enter n: ");
scanf("%d", &n);

for(i=1;i<=10;i++){ //for reverse table (i=10;i>=1;i--)
    printf("%d X %d = %d\n", n,i,n*i);
}

    return 0;
}