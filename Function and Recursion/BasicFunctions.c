#include<stdio.h>

/* Simple (no input no output)

void greeting(){
    printf("Hello World\n");
}


int main(){

    greeting();
    greeting();
    greeting();

    return 0;
}*/
/*(input but no output)
void sqroot(int n){
    printf("square root of %d is %d\n", n, n*n);
}

int main(){
    sqroot(2);
    sqroot(5);
    sqroot(10);
}*/
int add(int x,int y){
    return x+y;
}
int main(){

    int result = add(2,3);
    printf("Sum is %d\n", result);
   int result1 = add(40,67);
    printf("Sum is %d\n", result1);

    return 0;
}