#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    float gpa;
    printf("Enter your GPA Please: ");
    scanf("%f", &gpa);
    printf("Your GPA is %.2f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade); 
    printf("Your grade is %c\n", grade);

    char name[20];
    printf("Enter your name: ");
    getchar(); 
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  
    printf("Your name is %s\n", name);

    return 0; 
}
