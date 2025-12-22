#include<stdio.h>
#include<stdbool.h>

typedef struct{
    char name[50];
    int age;
    float cgpa;
    bool ispass;
}Student;

int main(){
    Student allstudents[6] = {
        {"Abhishek",19,9.00,true},
        {"Aman",19,9.10,true},
        {"Anmol",19,9.30,true},
        {"Shubh",20,3.20,false},
        {"Preet",18,7.85,false},
        {"Ron",18,5.25,true}
    };
    int n;
    printf("Enter Roll number: ");
    scanf("%d", &n);

    if(n<7 && n>0){
        printf("\nName: %s\nAge: %d\nCGPA: %.2f\nQualified: %s\n", allstudents[n-1].name,allstudents[n-1].age,allstudents[n-1].cgpa,
                                                                   (allstudents[n-1].ispass) ? "Yes" : "No");
        printf("\n");
        }    
    else{
        printf("Invalid Roll number!!");
        printf("\n");
    }

    return 0;
}