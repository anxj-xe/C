// fibonacci series nth positioned number guess

#include<stdio.h>

// 0 1 1 2 3 5 8 13 21 ...

int fibonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int result = fibonacci(a);
    printf("Number is %d",result);
    return 0;
}