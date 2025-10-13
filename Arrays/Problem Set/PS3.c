#include<stdio.h>
int main(){

    int array[10];
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    for(int i=0;i<10;i++){
        array[i]= a*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("The value of %d x %d is %d\n", a,(i+1),array[i]);
        
    }

    return 0;
}