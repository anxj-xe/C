#include<stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age>15){
        printf("You are welcome!");
    }
   else{
        printf("You are not welcome!");
    }

printf("\n");

if(age%5==1){
    printf("And it's valid!");
}
else{
     printf("But it's not valid!!!");
}
 
    return 0;
}