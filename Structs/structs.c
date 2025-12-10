#include<stdio.h>
#include<stdbool.h>

struct Student{
    char name[50];
    int age;
    float cgpa;
    bool isFulltime;
};

void Result(struct Student student);

int main(){

    struct Student stud1 = {"Anuj", 19, 9.1, true};
    struct Student stud2 = {"Anmol", 19, 9.2, false};

    Result(stud1);
    Result(stud2);

    return 0;
}

void Result(struct Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("CGPA: %.2f\n", student.cgpa);
    printf("Fulltime: %s\n\n", (student.isFulltime) ? "Yes" : "No");
}