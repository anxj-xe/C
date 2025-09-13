#include<stdio.h>
int main(){

    int n;
    int not_prime;
    printf("Enter value of n: ");
    scanf("%d", &n);

   if(n==1 || n==0){
    not_prime=1;
   }
   else{
    for(int i=2;i<n;i++){
        if(n%i==0 && n!=2){
            not_prime=1;
           break;
        }
    }
}
        if(not_prime==1){
             printf("%d is not a prime number", n);
        }
        else{
            printf("%d is a prime number", n);
    }
   

    return 0;
}