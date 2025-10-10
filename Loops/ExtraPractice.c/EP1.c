#include<stdio.h>
int main(){

   /* int n=10;
    for(int i=1;i<=n;i++){
        printf("%d\n", i);
    }
*/

/* int n=1;
    for(int i=10;i>=n;i--){
        printf("%d\n", i);
    }*/

    int n=20;
    for(int i=2;i<=n;i++){ //or we write for(int i=2;i<=n;i +=2) to avoid if operator.
        if(i%2==0){
            printf("%d\n", i);
        }
    }

    return 0;
}