#include<stdio.h>
int main(){
    float celsius;

    printf("Enter temp in Celcius : ");
    scanf("%f", &celsius);

    float f = 9*celsius/5 + 32;

    printf("The temp in F is %.2f", f);
}