#include<stdio.h>
#include<stdlib.h>
int main(){

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int *ptr = (int* )malloc(num*sizeof(num)); //(void* )malloc(size_t)

    if(ptr == NULL){
        printf("Invalid Malloc!");
        return 1;
    }
    for(int i =0;i<num;i++){
        printf("Enter %d number: ", i+1);
        scanf("%d", ptr + i);
    }
    for(int i = 0;i<num;i++){
        printf("%d\n", *(ptr+i));
    }

    return 0;
}