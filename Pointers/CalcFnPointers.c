#include<stdio.h>

void add(int x,int y){printf("Result: %d", x+y);}
void subtract(int x,int y){printf("Result: %d", x-y);}
void multiply(int x,int y){printf("Result: %d", x+y);}
void divide(int x,int y){printf("Result: %d", x/y);}

int main(){

    void (*operation[4])(int,int) = {add,subtract,multiply,divide};

    int a,b;
    printf("Enter X: ");
    scanf("%d", &a);
    printf("Enter Y: ");
    scanf("%d", &b);

    int choice;
    printf("Chose Operation: 1.Add 2.Subtract 3.Multiply 4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice>0 && choice<=4){
        operation[choice-1](a,b);
    }
    else{
        printf("Invalid choice:(");
    }

    return 0;
}