#include<stdio.h>
int main(){
    int choice;
    float a,b,result;

    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("\n\n");
    
    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choose your option(1-4): ");
    scanf("%d", &choice);
    printf("\n\n");

    printf("Enter 2nd number: ");
    scanf("%f", &b);

    switch(choice){
        case 1:
            result = a+b;
            printf("Answer: %.2f", result);
            break;

        case 2:
            result = a-b;
            printf("Answer: %.2f", result);
            break;
        
        case 3:
            result = a*b;
            printf("Answer: %.2f", result);
            break;
        
        case 4:
            if(b!=0)
            result=a/b;
            else{
                printf("You can't put denominator as 0");
            }
            printf("Answer: %.2f", result);
            break;

        default:
            printf("Invalid Input");
    }

    return 0;
}