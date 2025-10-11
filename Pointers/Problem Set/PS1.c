#include<stdio.h>

    void showaddress(int* x){
        printf("The address in function is %p\n", x);
    }

    int main(){
        int i=5;

        printf("The address in main is %p\n", &i);
        showaddress(&i);
        return 0;
    }