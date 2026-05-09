#include<stdio.h>
#include<string.h>
#include <stdlib.h>


int main(){

    int age;
    float gpa;
    char grade;
    char name[30];
    char fullName[50];
    char buffer[100];   // temporary buffer

        /* AGE INPUT */
    printf("Enter your age: ");
    fgets(buffer, sizeof(buffer), stdin);
    age = atoi(buffer);   // string → int convert


   

    /* GPA INPUT */
    printf("Enter your GPA: ");
    fgets(buffer, sizeof(buffer), stdin);
    gpa = atof(buffer);   // string → float convert

    /* GRADE INPUT */
    printf("Enter your grade: ");
    fgets(buffer, sizeof(buffer), stdin);
    grade = buffer[0];    // first character


    
    /* FIRST NAME */
    printf("Enter your first name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // remove newline safely

    /* FULL NAME */
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0';  // remove newline safely

    /* OUTPUT */
    printf("\nAge: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("First Name: %s\n", name);
    printf("Full Name: %s\n", fullName);


   
    return 0;
}


