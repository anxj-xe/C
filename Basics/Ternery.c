#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of B: ");
    scanf("%d", &b);

    a>b?printf("a is greater") : printf("b is greater"); //this is ternery aka sort form of the else if programme

    return 0;
}