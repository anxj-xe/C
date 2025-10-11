#include<stdio.h>
int main(){

/*    int student[5];
    
    printf("Enter numbers of 5 student:\n");

    scanf("%d", &student[0]);
    scanf("%d", &student[1]);
    scanf("%d", &student[2]);
    scanf("%d", &student[3]);
    scanf("%d", &student[4]);

    printf("The number of student 2 and student 4 is %d and %d", student[1], student[3]);

    return 0;
    */

    int student[]={3,4,5};
    for(int i=0;i<3;i++){
        printf("The number of student %d is %d\n", i, student[i]);
    }
    return 0;
}