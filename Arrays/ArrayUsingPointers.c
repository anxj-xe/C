#include<stdio.h>
int main(){

    int stud[]={34,56,66,74};

    int* ptr = &stud[0]; //aka int* ptr = stud;

    for(int i=0;i<4;i++){
        //printf("The adress of index %d s %u\n", i, &stud[i]);
        
        printf("The adress of index %d s %u\n", i, ptr);// both are same but here we have to use ptr++
        ptr++;
    }

    return 0;
}