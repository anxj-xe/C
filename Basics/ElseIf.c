#include<stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    if(scanf("%d", &age) !=1){ //used cuz if there any input except number
        printf("The input is invalid, enter a number\n");
        return 1; //return 1 used when it's program ended with an error
    }

    if(age>60){
        printf("You can drive and you are an elder citzen\n");
    }
    else if(age>40){
        printf("You can drive and you are an elder\n");
    }
    else if(age>18){
        printf("You can drive and you are an adult\n"); // make it more easy and clear if u checkin it rn gng
            }
    else{
        printf("You can't drive as you are a minor\n"); 
    }
    return 0;
}