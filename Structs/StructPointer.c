#include<stdio.h>

struct Batsman{
    char name[50];
    int age;
};

int main(){

    struct Batsman batsman1 = {"Virat Kohli", 37};

    struct Batsman *ptr = &batsman1;

    printf("Name: %s\nAge: %d", ptr->name,ptr->age);

    return 0;
}