#include<stdio.h>

    void valueinc(int* x){
        *x = *x * 10;
    }

    int main(){
    
    int i = 10;
    valueinc(&i);
    printf("The increased value of i is %d", i);

    return 0;
    }