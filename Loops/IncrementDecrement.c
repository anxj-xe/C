#include<stdio.h>
int main(){

int i=5;
printf("%d\n", i);

i= i+5;
printf("%d\n",i);

i +=2; //And *= /= -= also works the same.
printf("%d\n", i); //or printf("%d\n", ++i) adds 1 to i.

/*printf("%d\n", ++i) adds 1 to i. 
i++ is post increment operator
++i is pre incr oper.*/

    return 0;
}