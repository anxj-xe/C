#include<stdio.h>
#include<string.h>
int main(){

    // char str[] = "lmao";

    // printf("%d", strlen(str));


    // char source[] = "hey im anuj";
    // char target[30];
    // strcpy(target,source);

    // printf("%s", target);


    // char str1[] = "hello ";
    // char str2[] = "kitty";

    // printf("%s", strcat(str1,str2));


    char str1[] = "hii";
    char str2[] = "stranger"; //h comes before s
    int a = strcmp(str1, str2);

    printf("%d", a);
    

    return 0;
}