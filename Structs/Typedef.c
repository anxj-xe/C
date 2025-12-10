#include<stdio.h>

typedef struct{
    char firstname[50];
    char lastname[50];
}Owner;

typedef struct{
    char brand[50];
    char model[50];
    int year;
    Owner owner;
}Car;

typedef struct{
    char name[50];
    Car featuredcar;
}Dealership;

int main(){

    Owner owner1 = {"Anuj", "Das"};
    Car car1 = {"Porsche", "911", 2001, owner1};
    Dealership dealer1 = {"Car Dealer", car1};

    printf("Dealer: %s\n", dealer1.name);
    printf("Car: %s %s(%d)\nOwner: %s %s", dealer1.featuredcar.brand,dealer1.featuredcar.model,dealer1.featuredcar.year,
                                           dealer1.featuredcar.owner.firstname,dealer1.featuredcar.owner.lastname);

    return 0;
}