#include<stdio.h>
int main(){

int i,n;
printf("Enter n: ");
scanf("%d", &n);

for(i=1;i<=n;i++){
    if(i==4){
   // break;if u want to stop the loop from there
   continue; //if u just want to skip this particular element
    }
    printf("Value of i is %d\n", i);
}

    return 0;
}