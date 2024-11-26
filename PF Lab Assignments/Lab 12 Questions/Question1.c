#include <stdio.h>
#include <stdlib.h>

struct student{
    int marks;
};

int n;

struct student* students;

struct student* marks(struct student*);
void avg(struct student*, int);

int main(){
    students = marks(students);
    avg(students, n);
    free(students);

    return 0;
}

struct student* marks(struct student* students){
    printf("Enter Number of Students: ");
    scanf(" %d", &n);
    students = malloc(sizeof(struct student)*n);
    for (int i = 0; i < n; i ++){
        printf("Enter Marks for student %d: ", i+1);
        scanf(" %d", &students[i].marks);
    }
    return students;
}

void avg(struct student* students, int n){
    double avg_marks = 0.0;
    for (int i = 0; i < n; i++){
        avg_marks += students[i].marks;
    }
    printf("Average marks for %d students in class: %.2lf", 
    n, avg_marks/n);
}