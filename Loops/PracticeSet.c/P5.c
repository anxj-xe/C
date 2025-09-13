#include<stdio.h>
int main(){

    //Factorial question

    int n; //n is the number of which we have to find the factorial
    long long factorial = 1; //long long instead of int cuz fac is such a big number to be in 32 bit int range.
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        factorial*= i;
      
    }

    printf("Factorial of %d is %lld", n,factorial);
   
    return 0;
}