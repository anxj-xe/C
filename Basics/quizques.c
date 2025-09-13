#include<stdio.h>
int main(){
int marks;
printf("Enter marks: ");
scanf("%d", &marks);

if(marks<=100 && marks>90){
        printf("Grade = A");
}
    else if(marks<=90 && marks>70){
        printf("Grade = B");
}
    else if(marks<=70 && marks>60){
    printf("Grade = C");
}
    else if(marks<=60 && marks>=50){
        printf("Grade = D");
}
    else if(marks<50){
        printf("Grade =F");    
}
    return 0;
}