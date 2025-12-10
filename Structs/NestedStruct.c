#include<stdio.h>

struct Owner{
    char firstname[50];
    char middlename[50];
    char lastname[50];
};

struct Car{
    char brand[50];
    char model[50];
    int year;
    struct Owner owner;
};

void result(struct Car cars);

int main(){

    struct Owner owner1 = {"Anuj", "Das"};
    struct Owner owner2 = {"Pratima", "Rani", "Das"};

    struct Car car1 = {"Porsche", "911", 2001, owner1};
    struct Car car2 = {"BMW", "X5", 2006, owner2};

    result(car1);
    result(car2);    
    
    return 0;
}

void result(struct Car cars){
    printf("Car: %s %s (%d)\n", cars.brand,cars.model,cars.year);
    printf("Owner: %s %s %s\n\n", cars.owner.firstname,cars.owner.middlename,cars.owner.lastname);
}