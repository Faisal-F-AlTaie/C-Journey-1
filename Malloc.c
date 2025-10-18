#include <stdio.h>
#include <stdlib.h>

int main () {
    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    int size = sizeof(grades) / sizeof(grades[0]);

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1; // Exit code
    }
    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i +1);
        scanf(" %c", &grades[i]);
    }

     for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades);
    grades = NULL; // Avoids dangling pointers 

}