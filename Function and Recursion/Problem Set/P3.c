//force of att b/w two bodies

#include<stdio.h>

int force(int x){
    return (9.8)*x;
}

int main(){

    float a;
    printf("Enter a: ");
    scanf("%f", &a);
    float result = force(a);
    printf("\nForce on m will be %.2f", result);
    return 0;
}