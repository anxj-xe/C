#include<stdio.h>
int main(){

    float income , tax =0;
    printf("Enter Income: ");
    scanf("%f", &income);

    if(income<=250000){
        tax=0;
    }
    else if(income>250000 && income<=500000){
        tax=(income-250000)*0.05;
    }
    else if(income>500000 && income<=1000000){
        tax=(250000*0.05)+(income-500000)*0.2;
    }
    else if(income>1000000){
        tax=(250000*0.05)+(500000)*0.2+(income-1000000)*0.3;
    }

    printf("Your income tax is: %.2f", tax);

    return 0;
}