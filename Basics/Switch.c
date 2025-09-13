#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
                printf("you entered 1\n");
                break;
        case 2:
                printf("you entered 2\n");
                break;
        case 3:
                printf("you entered 3\n");
                break;
        default:
                printf("Nothing matched");
    }
    return 0;
    }