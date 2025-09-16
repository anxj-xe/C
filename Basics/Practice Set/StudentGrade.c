#include<stdio.h>
int main(){
    int Subject1;
    printf("Enter marks for subject 1: ");
    scanf("%d", &Subject1);

    int Subject2;
    printf("Enter marks for subject 2: ");
    scanf("%d", &Subject2);

    int Subject3;
    printf("Enter marks for subject 3: ");
    scanf("%d", &Subject3);

    if(Subject1<30 || Subject2<30 || Subject3<30){
        printf("You failed becuz of individual subject(s)");
    }
    else if((Subject1+Subject2+Subject3)/3 <40){
        printf("Lmao! You failed");
    }
    else{
        printf("You are passed");
    }

    return 0;
}