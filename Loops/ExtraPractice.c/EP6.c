#include<stdio.h>//cant do shit
int main(){

    int sum=0;

    for(int i=2;i<=100;i++){
        if(100%i==0){
            sum+=i;
        }
    }
     printf("Ans is %d", sum);
      

    return 0;
}