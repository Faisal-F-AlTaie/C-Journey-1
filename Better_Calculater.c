#include <stdio.h>
#include <stdlib.h>

int main () 
{
   double num1;
   double num2;
   char operator;

   printf("Enter a number: ");
   scanf("%lf", &num1);
   printf("Enter a operator (+, -, *, /): ");
   scanf(" %c", &operator); //have to put a space before %c to avoid skipping
   printf("Enter another number: ");
   scanf("%lf", &num2);

   if(operator == '+'){
        printf("%f", num1 + num2);

   } else if(operator == '-'){
        printf("%f", num1 - num2);
   } else if(operator == '/'){
        printf("%f", num1 / num2);
    } else if(operator == '*'){
        printf("%f", num1 * num2);
    } else {
        printf("Invalid operator");
    }
    

    return 0; 
}