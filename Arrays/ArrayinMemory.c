#include<stdio.h>
int main(){

    int stu[5];

    for(int i=0;i<5;i++){
        scanf("%d", &stu[i]);
    }

    for(int i=0;i<5;i++){
        printf("The adress of index %d is %u\n", i, &stu[i]);
    }

    return 0;
}