#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));

    int random_num = rand()%100 +1;
    int no_of_guesses =0;
    int guessed;
    

    do{
        printf("guess the number: ");
        scanf("%d", &guessed);

            if(guessed>random_num){
                printf("Lower the number\n");
            }
                else if(guessed<random_num){
                    printf("Higher the number\n");
                }
                   else{
                    printf("");
                   }
        no_of_guesses++;

    }while(random_num!=guessed); 
    printf("You guessed it correct in %d guesses.", no_of_guesses);

    return 0;
}