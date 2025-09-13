#include<stdio.h>
int main(){

    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("The value of the character is: %d\n", ch);

    if(ch>=97 && ch<=122){
        printf("The Character is in lowercase");
    }
else{
    printf("The Character is not in lowercase");
}

    return 0;
}