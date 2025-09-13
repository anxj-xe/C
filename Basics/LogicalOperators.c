#include<stdio.h>
int main(){

    int a = 1, b = 0;

    printf("Value of a and b is %d", a&&b); //&& used for AND

    printf("\nValue of a or b is %d", a||b); // || used for OR

    printf("\nValue of not(a) is %d\n", !a); // ! used for NOT

    if(a&&b){
        printf("Both are true");
    }
    else{
        printf("Both are false\n");
    }
    /*the if part is same as writing

    if(a){
        if(b){
         printf("both are true");
             }
    }
        */

    if(a||b){
        printf("Both are true");
    }
    else{
        printf("Both are false");
    }

    return 0;
}