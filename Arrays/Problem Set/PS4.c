#include<stdio.h>

    void printarray(int a[], int n){
        for(int i=0;i<n;i++){
            printf("%d ", a[i]);   
        }   
        printf("\n");
        
    }

    void reverse(int array[], int n){
        int temp;
        for(int i=0;i<n/2;i++){
            temp=array[i];
            array[i]=array[n-i-1];
            array[n-i-1]=temp;
        }
    }

int main(){

    int array[]={1,2,3,4,5,6};
    printarray(array, 6);
    reverse(array, 6);
    printarray(array, 6);

    return 0;
}